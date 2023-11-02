
@interface HMDAccessCodeDemoDataMocker : HMFObject <HMFLogging> {
    NSMutableDictionary * _accessCodes;
}

@property (readonly) NSMutableDictionary *accessCodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_controlResponseForReadRequest:(id)arg1;
- (id)_controlResponseForWriteRequest:(id)arg1;
- (id)_handleAddRequest:(id)arg1;
- (id)_handleListRequest;
- (id)_handleReadRequest:(id)arg1;
- (id)_handleRemoveRequest:(id)arg1;
- (id)_handleUpdateRequest:(id)arg1;
- (id)accessCodes;
- (id)handleReadRequests:(id)arg1;
- (id)handleWriteRequests:(id)arg1;
- (id)init;

@end
