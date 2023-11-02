
@interface MIUserManagement : NSObject {
    NSString * _enterprisePersonaUniqueString;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSDictionary * _personaAttributesMap;
    unsigned long long  _personaGenerationIdentifier;
    NSString * _primaryPersonaUniqueString;
    NSString * _systemPersonaUniqueString;
}

@property (nonatomic, copy) NSString *enterprisePersonaUniqueString;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSDictionary *personaAttributesMap;
@property (nonatomic) unsigned long long personaGenerationIdentifier;
@property (nonatomic, copy) NSString *primaryPersonaUniqueString;
@property (nonatomic, retain) NSString *systemPersonaUniqueString;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_onQueue_refreshPersonaInformationWithError:(id*)arg1;
- (id)enterprisePersonaUniqueString;
- (id)init;
- (id)internalQueue;
- (bool)isKnownPersonaUniqueString:(id)arg1 error:(id*)arg2;
- (id)multiPersonaSADAppBundleIDsWithError:(id*)arg1;
- (id)personaAttributesMap;
- (id)personaForBundleID:(id)arg1 error:(id*)arg2;
- (unsigned long long)personaGenerationIdentifier;
- (unsigned long long)personaTypeForPersonaUniqueString:(id)arg1;
- (id)primaryPersonaUniqueString;
- (void)setEnterprisePersonaUniqueString:(id)arg1;
- (void)setPersonaAttributesMap:(id)arg1;
- (void)setPersonaGenerationIdentifier:(unsigned long long)arg1;
- (void)setPrimaryPersonaUniqueString:(id)arg1;
- (void)setSystemPersonaUniqueString:(id)arg1;
- (id)systemPersonaUniqueString;

@end
