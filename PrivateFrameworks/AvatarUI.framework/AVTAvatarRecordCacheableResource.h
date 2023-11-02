
@interface AVTAvatarRecordCacheableResource : NSObject <AVTCacheableResource> {
    AVTUIEnvironment * _environment;
    bool  _includeAvatarData;
    <AVTAvatarRecord> * _record;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includeAvatarData;
@property (nonatomic, readonly) <AVTAvatarRecord> *record;
@property (readonly) Class superclass;

+ (id)persistentIdentifierForRecordData:(id)arg1;
+ (id)persistentIdentifierPrefixForRecordWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)costForScope:(id)arg1;
- (id)description;
- (id)environment;
- (id)identifierForScope:(id)arg1;
- (bool)includeAvatarData;
- (id)initWithAvatarRecord:(id)arg1 includeAvatarData:(bool)arg2 environment:(id)arg3;
- (id)persistentDataHashForScope:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)record;
- (bool)requiresEncryption;
- (id)tokenForObservingChangesWithHandler:(id /* block */)arg1;
- (id)volatileIdentifierForScope:(id)arg1;

@end
