
@interface WFImagePickerController : UIImagePickerController {
    id /* block */  _magicTapHandler;
}

@property (nonatomic, copy) id /* block */ magicTapHandler;

- (void).cxx_destruct;
- (bool)accessibilityPerformMagicTap;
- (id /* block */)magicTapHandler;
- (void)setMagicTapHandler:(id /* block */)arg1;

@end
