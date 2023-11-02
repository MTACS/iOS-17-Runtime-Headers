
@interface AAUIInheritanceAccessKeyPDFGenerator : NSObject {
    AAInheritanceContactController * _contactController;
    NSString * _contactDisplayName;
    NSString * _ownerDisplayName;
    NSString * _ownerEmailAddress;
    NSString * _ownerFirstName;
}

- (void).cxx_destruct;
- (id)_attributedStringWithField:(id)arg1 value:(id)arg2;
- (id)_pdfMetaData;
- (void)_renderAccessKeyWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 yPosition:(double)arg2;
- (double)_renderAccountDetailsWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 yPosition:(double)arg2;
- (void)_renderFooterWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 yPosition:(double)arg2;
- (void)_renderLogoImageWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_renderMessageWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 yPosition:(double)arg2;
- (double)_renderQRCodeImageWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 yPosition:(double)arg2;
- (double)_renderRectBoxWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 yPosition:(double)arg2 drawContext:(struct CGContext { }*)arg3;
- (double)_renderTitleWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)createPDFDocumentData;
- (id)initWithAppleAccount:(id)arg1 localContactInfo:(id)arg2;

@end
