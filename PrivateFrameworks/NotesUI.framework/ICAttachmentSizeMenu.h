
@interface ICAttachmentSizeMenu : NSObject {
    UIImage * _image;
    bool  _isOverrideVariant;
    short  _preferredViewSize;
    id /* block */  _selectedSizeHandler;
    NSArray * _supportedSizes;
    NSString * _title;
}

@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) bool isOverrideVariant;
@property (nonatomic) short preferredViewSize;
@property (nonatomic, copy) id /* block */ selectedSizeHandler;
@property (nonatomic, copy) NSArray *supportedSizes;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)actionForSize:(short)arg1;
- (id)createMenu;
- (id)image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 preferredViewSize:(short)arg3 supportedSizes:(id)arg4 isOverrideVariant:(bool)arg5 selectedSizeHandler:(id /* block */)arg6;
- (bool)isOverrideVariant;
- (id)localizedTitleForSize:(short)arg1;
- (short)preferredViewSize;
- (id /* block */)selectedSizeHandler;
- (void)setImage:(id)arg1;
- (void)setPreferredViewSize:(short)arg1;
- (void)setSelectedSizeHandler:(id /* block */)arg1;
- (void)setSupportedSizes:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)supportedSizes;
- (id)title;

@end
