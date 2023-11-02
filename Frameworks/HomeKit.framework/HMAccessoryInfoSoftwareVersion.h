
@interface HMAccessoryInfoSoftwareVersion : NSObject {
    HMFSoftwareVersion * _softwareVersion;
}

@property (readonly, copy) HMFSoftwareVersion *softwareVersion;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (id)initWithSoftwareVersion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protoData;
- (id)protoPayload;
- (id)softwareVersion;

@end
