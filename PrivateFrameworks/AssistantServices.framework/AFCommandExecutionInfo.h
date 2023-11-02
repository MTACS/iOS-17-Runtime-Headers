
@interface AFCommandExecutionInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    AFHomeInfo * _currentHomeInfo;
    NSArray * _deviceRestrictions;
    AFEndpointInfo * _endpointInfo;
    NSString * _executionID;
    AFInstanceInfo * _instanceInfo;
    AFPeerInfo * _originPeerInfo;
    AFRequestHandlingContext * _requestHandlingContextSnapshot;
    NSString * _requestID;
    AFSpeechInfo * _speechInfo;
    NSUUID * _turnId;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) AFHomeInfo *currentHomeInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *deviceRestrictions;
@property (nonatomic, readonly, copy) AFEndpointInfo *endpointInfo;
@property (nonatomic, readonly, copy) NSString *executionID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AFInstanceInfo *instanceInfo;
@property (nonatomic, readonly, copy) AFPeerInfo *originPeerInfo;
@property (nonatomic, readonly, copy) AFRequestHandlingContext *requestHandlingContextSnapshot;
@property (nonatomic, readonly, copy) NSString *requestID;
@property (nonatomic, readonly, copy) AFSpeechInfo *speechInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *turnId;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentHomeInfo;
- (id)description;
- (id)deviceRestrictions;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointInfo;
- (id)executionID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithExecutionID:(id)arg1 requestID:(id)arg2 turnId:(id)arg3 originPeerInfo:(id)arg4 currentHomeInfo:(id)arg5 endpointInfo:(id)arg6 instanceInfo:(id)arg7 speechInfo:(id)arg8 requestHandlingContextSnapshot:(id)arg9 deviceRestrictions:(id)arg10 userInfo:(id)arg11;
- (id)instanceInfo;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)originPeerInfo;
- (id)requestHandlingContextSnapshot;
- (id)requestID;
- (id)speechInfo;
- (id)turnId;
- (id)userInfo;

@end
