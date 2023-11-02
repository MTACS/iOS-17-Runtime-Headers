
@protocol DAGroup <DACardDAVRecord>

@required

- (void*)asABGroup;
- (CNMutableGroup *)asGroup;
- (NSString *)eTag;
- (NSString *)externalIdentifier;
- (NSString *)externalUUID;
- (int)legacyIdentifier;
- (void)setETag:(NSString *)arg1;
- (void)setExternalIdentifier:(NSString *)arg1;
- (void)setExternalUUID:(NSString *)arg1;

@end
