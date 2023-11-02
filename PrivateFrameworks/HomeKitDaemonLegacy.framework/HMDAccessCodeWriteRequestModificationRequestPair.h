
@interface HMDAccessCodeWriteRequestModificationRequestPair : HMFObject {
    NSArray * _modificationRequests;
    HMDCharacteristicWriteRequest * _writeRequest;
}

@property (readonly, copy) NSArray *modificationRequests;
@property (readonly) HMDCharacteristicWriteRequest *writeRequest;

- (void).cxx_destruct;
- (id)initWithWriteRequest:(id)arg1 modificationRequests:(id)arg2;
- (id)modificationRequests;
- (id)writeRequest;

@end
