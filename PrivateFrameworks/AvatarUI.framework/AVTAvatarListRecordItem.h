
@interface AVTAvatarListRecordItem : NSObject <AVTAvatarListItem> {
    <AVTAvatarRecord> * _avatar;
    UIImage * _cachedImage;
}

@property (nonatomic, readonly) <AVTAvatarRecord> *avatar;
@property (nonatomic) UIImage *cachedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)avatar;
- (id)cachedImage;
- (void)downcastWithRecordHandler:(id /* block */)arg1 imageHandler:(id /* block */)arg2 viewHandler:(id /* block */)arg3;
- (void)downcastWithRecordHandler:(id /* block */)arg1 viewHandler:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)initWithAvatar:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCachedImage:(id)arg1;

@end
