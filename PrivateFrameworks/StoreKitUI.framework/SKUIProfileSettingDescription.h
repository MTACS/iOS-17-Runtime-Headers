
@interface SKUIProfileSettingDescription : SKUISettingDescription {
    NSString * _handle;
    NSString * _name;
    NSOperationQueue * _operationQueue;
    UIImage * _photo;
}

@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIImage *photo;

+ (Class)_viewClassForSettingDescription:(id)arg1;

- (void).cxx_destruct;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;
- (void)dealloc;
- (id)handle;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (id)name;
- (id)photo;
- (void)reloadData;

@end
