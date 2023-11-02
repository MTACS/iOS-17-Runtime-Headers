
@interface DUDocumentUIElementObjC : NSObject {
    _TtC21DocumentUnderstanding19DUDocumentUIElement * _underlyingElement;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } absoluteOriginOnScreen;
@property (nonatomic, copy) NSString *classDescriptor;
@property (nonatomic) float fontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInWindow;
@property (nonatomic) bool isOnScreen;
@property (nonatomic) bool isValidForContentExtraction;
@property (nonatomic, copy) NSArray *superviewClassNames;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *version;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })absoluteOriginOnScreen;
- (id)classDescriptor;
- (float)fontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInWindow;
- (id)init;
- (bool)isOnScreen;
- (bool)isValidForContentExtraction;
- (void)setAbsoluteOriginOnScreen:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClassDescriptor:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsOnScreen:(bool)arg1;
- (void)setIsValidForContentExtraction:(bool)arg1;
- (void)setSuperviewClassNames:(id)arg1;
- (void)setText:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)superviewClassNames;
- (id)text;
- (id)version;

@end
