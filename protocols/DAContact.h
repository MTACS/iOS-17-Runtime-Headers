
@protocol DAContact <DACardDAVRecord>

@required

- (CNMutableContact *)asContact;
- (void*)asPerson;
- (NSString *)eTag;
- (NSString *)externalIdentifier;
- (NSString *)externalUUID;
- (int)legacyIdentifier;
- (void)setETag:(NSString *)arg1;
- (void)setExternalIdentifier:(NSString *)arg1;
- (void)setExternalUUID:(NSString *)arg1;

@end
