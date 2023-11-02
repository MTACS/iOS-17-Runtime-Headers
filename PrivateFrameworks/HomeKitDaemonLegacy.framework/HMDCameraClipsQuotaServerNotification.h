
@interface HMDCameraClipsQuotaServerNotification : HMFObject {
    NSString * _containerIdentifier;
    long long  _reason;
    NSString * _requestID;
    NSString * _userDSID;
}

@property (readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) long long reason;
@property (readonly, copy) NSString *requestID;
@property (readonly, copy) NSString *userDSID;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)dictionaryRepresentation;
- (id)initWithContainerIdentifier:(id)arg1 reason:(long long)arg2 requestID:(id)arg3 userDSID:(id)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (long long)reason;
- (id)requestID;
- (id)userDSID;

@end
