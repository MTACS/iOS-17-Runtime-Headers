
@interface DEPDeviceUploadSubmitDeviceRequestPayload : NSObject <NSSecureCoding> {
    DEPDeviceUploadUser * _approver;
    NSString * _orgId;
    NSString * _orgName;
    DEPDeviceUploadRequestType * _requestType;
    NSString * _soldToId;
    DEPDeviceUploadUser * _submitter;
}

@property (nonatomic, readonly) DEPDeviceUploadUser *approver;
@property (nonatomic, readonly) NSString *orgId;
@property (nonatomic, readonly) NSString *orgName;
@property (nonatomic, readonly) DEPDeviceUploadRequestType *requestType;
@property (nonatomic, readonly) NSString *soldToId;
@property (nonatomic, readonly) DEPDeviceUploadUser *submitter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)approver;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrgId:(id)arg1 orgName:(id)arg2 requestType:(id)arg3 submitter:(id)arg4 approver:(id)arg5 soldToId:(id)arg6;
- (id)orgId;
- (id)orgName;
- (id)requestType;
- (id)soldToId;
- (id)submitter;

@end
