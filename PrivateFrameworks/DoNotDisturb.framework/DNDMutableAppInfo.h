
@interface DNDMutableAppInfo : DNDAppInfo

@property (nonatomic, copy) DNDApplicationIdentifier *applicationIdentifier;
@property (nonatomic, copy) NSURL *cachedIconURL;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) long long source;
@property (nonatomic, copy) NSURL *storeIconURL;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCachedIconURL:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setStoreIconURL:(id)arg1;

@end
