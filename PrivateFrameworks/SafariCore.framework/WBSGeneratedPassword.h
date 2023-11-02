
@interface WBSGeneratedPassword : NSObject {
    NSDate * _generationDate;
    NSData * _keychainPersistentReference;
    NSDictionary * _originalKeychainDictionary;
    NSString * _password;
    NSURLProtectionSpace * _protectionSpace;
    bool  _wasGeneratedInPrivateBrowsingSession;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDate *generationDate;
@property (nonatomic, readonly, copy) NSData *keychainPersistentReference;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly) NSURLProtectionSpace *protectionSpace;
@property (nonatomic, readonly) bool wasGeneratedInPrivateBrowsingSession;

+ (id)keychainDictionaryRepresentationWithPassword:(id)arg1;
+ (id)privateBrowsingSentinel;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)generationDate;
- (id)initWithKeychainItemDictionary:(id)arg1;
- (id)initWithPassword:(id)arg1 protectionSpace:(id)arg2 generationDate:(id)arg3 wasGeneratedInPrivateBrowsingSession:(bool)arg4;
- (id)keychainDictionaryRepresentationWithPassword:(id)arg1;
- (id)keychainPersistentReference;
- (id)password;
- (id)protectionSpace;
- (bool)wasGeneratedInPrivateBrowsingSession;

@end
