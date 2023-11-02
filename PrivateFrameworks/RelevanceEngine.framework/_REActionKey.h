
@interface _REActionKey : NSObject {
    <REDonatedActionIdentifierProviding> * _actionType;
    unsigned long long  _hash;
    NSString * _identifier;
    unsigned long long  _relevanceProvidersHash;
}

@property (nonatomic, readonly) <REDonatedActionIdentifierProviding> *actionType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long relevanceProvidersHash;

- (void).cxx_destruct;
- (id)actionType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 actionType:(id)arg2 relevanceProvidersHash:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)relevanceProvidersHash;

@end
