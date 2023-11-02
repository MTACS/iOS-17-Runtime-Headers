
@interface IMAStickerPickerPresentationContext : NSObject {
    bool  _deferredPresentation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    IMSticker * _stickerForDeferredRePresentation;
    UIViewController * _stickerPickerContainer;
    unsigned long long  _style;
}

@property (nonatomic) bool deferredPresentation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, retain) IMSticker *stickerForDeferredRePresentation;
@property (nonatomic, retain) UIViewController *stickerPickerContainer;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (bool)deferredPresentation;
- (void)setDeferredPresentation:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setStickerForDeferredRePresentation:(id)arg1;
- (void)setStickerPickerContainer:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (id)stickerForDeferredRePresentation;
- (id)stickerPickerContainer;
- (unsigned long long)style;

@end
