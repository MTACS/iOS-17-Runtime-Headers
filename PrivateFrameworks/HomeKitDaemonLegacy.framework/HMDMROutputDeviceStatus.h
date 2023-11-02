
@interface HMDMROutputDeviceStatus : NSObject {
    NSError * _error;
    HMDMRAVEndpoint * _outputEndpoint;
    NSString * _outputUID;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) HMDMRAVEndpoint *outputEndpoint;
@property (nonatomic, readonly) NSString *outputUID;

- (void).cxx_destruct;
- (id)error;
- (unsigned long long)hash;
- (id)initWithOutputEndpoint:(id)arg1;
- (id)initWithOutputEndpoint:(id)arg1 error:(id)arg2;
- (id)initWithOutputUID:(id)arg1;
- (id)initWithOutputUID:(id)arg1 error:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)outputEndpoint;
- (id)outputUID;

@end
