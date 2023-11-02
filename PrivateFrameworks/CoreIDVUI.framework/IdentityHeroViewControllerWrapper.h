
@interface IdentityHeroViewControllerWrapper : NSObject {
    NSData * _imageData;
    NSString * _primaryButtonTitle;
    NSString * _secondaryButtonTitle;
    NSString * _subTitle;
    NSString * _title;
}

- (void).cxx_destruct;
- (id)identityHeroViewController:(id /* block */)arg1 secondaryButtonClicked:(id /* block */)arg2;
- (id)initWithImageData:(id)arg1 title:(id)arg2 subtitle:(id)arg3 primaryButtonTitle:(id)arg4 secondaryButtonTitle:(id)arg5;

@end
