
@interface GKLoadContactResourceOperation : GKLoadResourceOperation {
    NSString * _contactId;
    CNAvatarImageRenderer * _monogrammer;
}

@property (nonatomic, readonly, copy) NSString *contactId;
@property (nonatomic, retain) CNAvatarImageRenderer *monogrammer;

+ (double)mainScreenScale;

- (void).cxx_destruct;
- (id)contactId;
- (id)imageCreationError;
- (id)initWithContactId:(id)arg1;
- (void)main;
- (id)makeFetchError;
- (id)monogrammer;
- (void)setMonogrammer:(id)arg1;

@end
