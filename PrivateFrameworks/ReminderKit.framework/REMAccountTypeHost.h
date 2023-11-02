
@interface REMAccountTypeHost : NSObject {
    REMObjectID * _accountObjectID;
    long long  _type;
}

@property (nonatomic, readonly) REMObjectID *accountObjectID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (long long)_accountType;
- (id)accountObjectID;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;
- (id)internalDescription;
- (bool)isCalDav;
- (bool)isCloudBased;
- (bool)isCloudKit;
- (bool)isEqual:(id)arg1;
- (bool)isExchange;
- (bool)isLocal;
- (bool)isLocalInternal;
- (bool)isNonPrimaryCloudKit;
- (bool)isPrimaryCloudKit;
- (bool)isValid;
- (long long)type;

@end
