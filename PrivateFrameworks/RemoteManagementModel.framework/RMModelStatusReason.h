
@interface RMModelStatusReason : RMModelPayloadBase {
    NSString * _statusCode;
    NSString * _statusDescription;
    RMModelAnyPayload * _statusDetails;
}

@property (nonatomic, copy) NSString *statusCode;
@property (nonatomic, copy) NSString *statusDescription;
@property (nonatomic, copy) RMModelAnyPayload *statusDetails;

// Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 description:(id)arg2 details:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializeWithType:(short)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setStatusDescription:(id)arg1;
- (void)setStatusDetails:(id)arg1;
- (id)statusCode;
- (id)statusDescription;
- (id)statusDetails;

// Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement

+ (id)reasonWithCode:(id)arg1 description:(id)arg2 details:(id)arg3;
+ (id)reasonWithCode:(id)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)reasonWithError:(id)arg1;

- (bool)isEqual:(id)arg1;
- (bool)isEqualToStatusReason:(id)arg1;

@end
