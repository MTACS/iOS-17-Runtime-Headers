
@interface WBWebsiteDataRecord : NSObject {
    NSString * _domain;
    NSMutableSet * _profileIdentifiers;
    unsigned long long  _usage;
}

@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *XPCDictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) NSMutableSet *profileIdentifiers;
@property (nonatomic) unsigned long long usage;

+ (id)websiteDataRecordFromXPCDictionary:(id)arg1;
+ (id)websiteDataRecordWithDomain:(id)arg1 profileIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (id)XPCDictionaryRepresentation;
- (id)_initWithDomain:(id)arg1 profileIdentifiers:(id)arg2;
- (id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2 profileIdentifiers:(id)arg3;
- (id)domain;
- (id)profileIdentifiers;
- (void)setUsage:(unsigned long long)arg1;
- (unsigned long long)usage;

@end
