
@interface HMDRemoteMessage : HMFMessage {
    unsigned long long  _sendOptions;
    HMDHomeKitVersion * _sourceVersion;
    NSUUID * _transactionIdentifier;
    long long  _type;
}

@property (nonatomic, copy) NSString *attributedMessageName;
@property (nonatomic, readonly) NSString *collapseID;
@property (nonatomic) unsigned long long responseRestriction;
@property (nonatomic) unsigned long long restriction;
@property (getter=isSecure, nonatomic) bool secure;
@property (nonatomic, readonly) unsigned long long sendOptions;
@property (nonatomic, retain) HMDRemoteMessageSenderContext *senderContext;
@property (nonatomic, retain) HMDHomeKitVersion *sourceVersion;
@property (nonatomic, retain) NSString *toID;
@property (nonatomic, copy) NSUUID *transactionIdentifier;
@property (nonatomic) long long type;

+ (id)messageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4 restriction:(unsigned long long)arg5;
+ (id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4;
+ (id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4 restriction:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)attributedMessageName;
- (id)collapseID;
- (id)copyWithDestination:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 headers:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(bool)arg7;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(bool)arg6;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(bool)arg6 restriction:(unsigned long long)arg7;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 headers:(id)arg5 type:(long long)arg6 timeout:(double)arg7 secure:(bool)arg8;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 headers:(id)arg5 type:(long long)arg6 timeout:(double)arg7 secure:(bool)arg8 restriction:(unsigned long long)arg9 sendOptions:(unsigned long long)arg10;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 headers:(id)arg5 type:(long long)arg6 timeout:(double)arg7 secure:(bool)arg8 restriction:(unsigned long long)arg9 sendOptions:(unsigned long long)arg10 collapseID:(id)arg11;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(bool)arg7;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(bool)arg7 restriction:(unsigned long long)arg8;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(bool)arg7 restriction:(unsigned long long)arg8 sendOptions:(unsigned long long)arg9;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(bool)arg7 restriction:(unsigned long long)arg8 sendOptions:(unsigned long long)arg9 collapseID:(id)arg10;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6;
- (bool)isRemote;
- (bool)isSecure;
- (id)privateDescription;
- (unsigned long long)responseRestriction;
- (unsigned long long)restriction;
- (unsigned long long)sendOptions;
- (id)senderContext;
- (void)setAttributedMessageName:(id)arg1;
- (void)setInternalResponseHandler:(id /* block */)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setResponseRestriction:(unsigned long long)arg1;
- (void)setRestriction:(unsigned long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSenderContext:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setToID:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (id)sourceVersion;
- (id)toID;
- (id)transactionIdentifier;
- (long long)type;

@end
