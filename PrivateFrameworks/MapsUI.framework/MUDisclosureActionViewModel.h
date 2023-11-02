
@interface MUDisclosureActionViewModel : NSObject <MUDisclosureActionViewModelProviding> {
    id /* block */  _actionBlock;
    UIImage * _image;
    UIColor * _imageTintColor;
    NSString * _titleString;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *imageTintColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *titleString;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)image;
- (id)imageTintColor;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setTitleString:(id)arg1;
- (id)titleString;

@end
