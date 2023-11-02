
@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation {
    NSString * _contactId;
    CNAvatarImageRenderer * _monogrammer;
}

@property (nonatomic, readonly, copy) NSString *contactId;
@property (nonatomic, retain) CNAvatarImageRenderer *monogrammer;

+ (double)mainScreenScale;
+ (id)supportedScheme;

- (void).cxx_destruct;
- (id)contactId;
- (id)initWithContactId:(id)arg1;
- (id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2;
- (void)main;
- (id)makeFetchError;
- (id)makePlatformUnsupportedError;
- (id)monogrammer;
- (void)setMonogrammer:(id)arg1;

@end
