
@protocol DAContactsAccount <DACardDAVRecord>

@required

- (NSString *)externalIdentifier;
- (NSString *)identifier;
- (int)legacyIdentifier;

@end
