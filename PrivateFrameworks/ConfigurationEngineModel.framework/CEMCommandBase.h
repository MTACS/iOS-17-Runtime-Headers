
@interface CEMCommandBase : CEMPayloadBase {
    NSString * _commandDescription;
    NSString * _commandIdentifier;
    CEMAnyPayload * _commandPayload;
    NSNumber * _commandRequiresNetworkTether;
    NSString * _commandType;
}

@property (nonatomic, copy) NSString *commandDescription;
@property (nonatomic, copy) NSString *commandIdentifier;
@property (nonatomic, copy) CEMAnyPayload *commandPayload;
@property (nonatomic, copy) NSNumber *commandRequiresNetworkTether;
@property (nonatomic, copy) NSString *commandType;

+ (id)commandForData:(id)arg1 error:(id*)arg2;
+ (id)commandForPayload:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)commandDescription;
- (id)commandIdentifier;
- (id)commandPayload;
- (id)commandRequiresNetworkTether;
- (id)commandType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadCommandFromDictionary:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)serialize;
- (id)serializeAsDataWithError:(id*)arg1;
- (void)setCommandDescription:(id)arg1;
- (void)setCommandIdentifier:(id)arg1;
- (void)setCommandPayload:(id)arg1;
- (void)setCommandRequiresNetworkTether:(id)arg1;
- (void)setCommandType:(id)arg1;

@end
