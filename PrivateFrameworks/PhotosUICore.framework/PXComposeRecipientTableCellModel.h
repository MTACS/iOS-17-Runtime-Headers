
@interface PXComposeRecipientTableCellModel : PXObservable {
    NSString * _address;
    bool  _checked;
    CNContact * _contact;
    UIImage * _image;
    long long  _imageRequestID;
    bool  _isValidAddress;
    NSString * _name;
    bool  _showsCheckbox;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly) bool checked;
@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly) long long imageRequestID;
@property (nonatomic, readonly) bool isValidAddress;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool showsCheckbox;

+ (double)imageDiameter;
+ (double)imageInset;
+ (double)imageVerticalInset;

- (void).cxx_destruct;
- (id)address;
- (bool)checked;
- (id)contact;
- (id)image;
- (long long)imageRequestID;
- (id)init;
- (bool)isValidAddress;
- (id)name;
- (void)performChanges:(id /* block */)arg1;
- (void)setAddress:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageRequestID:(long long)arg1;
- (void)setIsValidAddress:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setShowsCheckbox:(bool)arg1;
- (bool)showsCheckbox;

@end
