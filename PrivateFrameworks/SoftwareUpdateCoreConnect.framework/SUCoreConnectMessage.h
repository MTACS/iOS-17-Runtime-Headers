
@interface SUCoreConnectMessage : NSObject <NSSecureCoding> {
    NSSet * _allowlistedClasses;
    NSString * _clientID;
    NSString * _clientIDRaw;
    int  _clientProcessIdentifier;
    NSError * _error;
    NSDictionary * _message;
    NSString * _messageName;
    long long  _messageType;
    SUCoreConnectVersion * _version;
}

@property (nonatomic, readonly, retain) NSSet *allowlistedClasses;
@property (nonatomic, readonly, retain) NSString *clientID;
@property (nonatomic, readonly, retain) NSString *clientIDRaw;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (nonatomic, readonly, retain) NSError *error;
@property (nonatomic, readonly, retain) NSDictionary *message;
@property (nonatomic, readonly, retain) NSString *messageName;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly, retain) SUCoreConnectVersion *version;

+ (id)nameForMessageType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (bool)validateMessageDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)allowlistedClasses;
- (id)clientID;
- (id)clientIDRaw;
- (int)clientProcessIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 messageName:(id)arg2 clientID:(id)arg3 version:(id)arg4 message:(id)arg5;
- (id)message;
- (id)messageName;
- (long long)messageType;
- (id)summary;
- (id)version;

@end
