
@interface PKExpressTransactionState : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet * _TCIs;
    NSString * _applicationIdentifier;
    bool  _associated;
    bool  _express;
    NSString * _keyIdentifier;
    NSString * _passUniqueIdentifier;
    bool  _processing;
    unsigned long long  _receivedEvents;
    long long  _standaloneTransactionType;
    long long  _type;
    unsigned char  _uuid;
}

@property (nonatomic, readonly, copy) NSSet *TCIs;
@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (getter=isAssociated, nonatomic, readonly) bool associated;
@property (getter=isExpress, nonatomic, readonly) bool express;
@property (getter=isIgnorable, nonatomic, readonly) bool ignorable;
@property (nonatomic, readonly, copy) NSString *keyIdentifier;
@property (nonatomic, readonly, copy) NSString *passUniqueIdentifier;
@property (getter=isProcessing, nonatomic, readonly) bool processing;
@property (nonatomic, readonly) unsigned long long receivedEvents;
@property (nonatomic, readonly) long long standaloneTransactionType;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) bool transacted;
@property (nonatomic, readonly) long long type;

+ (id)create;
+ (id)createForExpressType:(long long)arg1;
+ (id)createForStandaloneTransaction:(long long)arg1 applicationIdentifier:(id)arg2 keyIdentifier:(id)arg3 passUniqueIdentifier:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)TCIs;
- (void)_populatePassUniqueIdentifierWithLookup:(id /* block */)arg1;
- (id)applicationIdentifier;
- (void)associateWithApplicationIdentifier:(id)arg1 keyIdentifier:(id)arg2 passUniqueIdentifier:(id)arg3;
- (void)associateWithTCIs:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAssociated;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToState:(id)arg1;
- (bool)isExpress;
- (bool)isIgnorable;
- (bool)isProcessing;
- (bool)isRelatedToState:(id)arg1;
- (id)keyIdentifier;
- (bool)mergeState:(id)arg1;
- (id)passUniqueIdentifier;
- (bool)receiveEvents:(unsigned long long)arg1;
- (bool)receiveStandaloneTransaction:(long long)arg1;
- (unsigned long long)receivedEvents;
- (void)resolve;
- (long long)standaloneTransactionType;
- (long long)status;
- (bool)transacted;
- (long long)type;

@end
