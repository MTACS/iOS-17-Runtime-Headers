
@interface HMDCameraClipManagerRequestLogEvent : HMMHomeLogEvent {
    NSString * _requestName;
}

@property (nonatomic, readonly) NSString *requestName;

- (void).cxx_destruct;
- (id)initWithRequestName:(id)arg1 homeUUID:(id)arg2;
- (id)requestName;

@end
