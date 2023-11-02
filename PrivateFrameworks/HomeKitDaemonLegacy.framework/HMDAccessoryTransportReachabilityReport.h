
@interface HMDAccessoryTransportReachabilityReport : HMFObject {
    bool  _hasAdvertisement;
    NSString * _linkType;
    NSString * _protocol;
    NSString * _protocolVersion;
    bool  _reachable;
    NSDate * _reachableLastChangedTime;
    NSString * _reason;
}

@property (nonatomic, readonly) bool hasAdvertisement;
@property (nonatomic, readonly, copy) NSString *linkType;
@property (nonatomic, readonly, copy) NSString *protocol;
@property (nonatomic, readonly, copy) NSString *protocolVersion;
@property (nonatomic, readonly) bool reachable;
@property (nonatomic, readonly) NSDate *reachableLastChangedTime;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (bool)hasAdvertisement;
- (id)initWithLinkType:(id)arg1 hasAdvertisement:(bool)arg2 protocol:(id)arg3 protocolVersion:(id)arg4 reachable:(bool)arg5 reachableLastChangedTime:(id)arg6 reason:(id)arg7;
- (id)linkType;
- (id)protocol;
- (id)protocolVersion;
- (bool)reachable;
- (id)reachableLastChangedTime;
- (id)reason;
- (void)setReason:(id)arg1;

@end
