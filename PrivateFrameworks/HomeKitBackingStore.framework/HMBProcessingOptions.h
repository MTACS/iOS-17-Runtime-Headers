
@interface HMBProcessingOptions : HMFObject <NSSecureCoding> {
    HMFActivity * _activity;
    bool  _disallowsCellularAccessForMirrorOutput;
    bool  _disallowsModelCreation;
    NSString * _label;
    NSString * _messageName;
    NSDictionary * _messagePayload;
    id /* block */  _messageResponseHandler;
    NSUUID * _messageTransactionIdentifier;
    long long  _qualityOfService;
    bool  _requiresModelCreation;
    bool  _shouldEnqueueMirrorOutput;
    bool  _shouldRollBackIfMirrorOutputFails;
    unsigned long long  _transactionItemsBatchLimit;
}

@property (nonatomic, retain) HMFActivity *activity;
@property (nonatomic) bool disallowsCellularAccessForMirrorOutput;
@property bool disallowsModelCreation;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, retain) NSString *messageName;
@property (nonatomic, retain) NSDictionary *messagePayload;
@property (nonatomic, copy) id /* block */ messageResponseHandler;
@property (nonatomic, retain) NSUUID *messageTransactionIdentifier;
@property (nonatomic) long long qualityOfService;
@property bool requiresModelCreation;
@property (nonatomic) bool shouldEnqueueMirrorOutput;
@property (nonatomic) bool shouldRollBackIfMirrorOutputFails;
@property (nonatomic) unsigned long long transactionItemsBatchLimit;

+ (id)optionsWithLabel:(id)arg1;
+ (id)optionsWithMessage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (id)attributeDescriptions;
- (bool)disallowsCellularAccessForMirrorOutput;
- (bool)disallowsModelCreation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)messageName;
- (id)messagePayload;
- (id /* block */)messageResponseHandler;
- (id)messageTransactionIdentifier;
- (long long)qualityOfService;
- (bool)requiresModelCreation;
- (void)setActivity:(id)arg1;
- (void)setDisallowsCellularAccessForMirrorOutput:(bool)arg1;
- (void)setDisallowsModelCreation:(bool)arg1;
- (void)setMessageName:(id)arg1;
- (void)setMessagePayload:(id)arg1;
- (void)setMessageResponseHandler:(id /* block */)arg1;
- (void)setMessageTransactionIdentifier:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRequiresModelCreation:(bool)arg1;
- (void)setShouldEnqueueMirrorOutput:(bool)arg1;
- (void)setShouldRollBackIfMirrorOutputFails:(bool)arg1;
- (void)setTransactionItemsBatchLimit:(unsigned long long)arg1;
- (bool)shouldEnqueueMirrorOutput;
- (bool)shouldRollBackIfMirrorOutputFails;
- (unsigned long long)transactionItemsBatchLimit;

@end
