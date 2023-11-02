
@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying> {
    <SKUIItemRequestDelegate> * _delegate;
    NSString * _imageProfile;
    NSArray * _itemIdentifiers;
    NSString * _keyProfile;
}

@property (nonatomic) <SKUIItemRequestDelegate> *delegate;
@property (nonatomic, copy) NSString *imageProfile;
@property (nonatomic, copy) NSArray *itemIdentifiers;
@property (nonatomic, copy) NSString *keyProfile;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)finishWithResource:(id)arg1;
- (id)imageProfile;
- (id)itemIdentifiers;
- (id)keyProfile;
- (id)newLoadOperation;
- (void)setDelegate:(id)arg1;
- (void)setImageProfile:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setKeyProfile:(id)arg1;

@end
