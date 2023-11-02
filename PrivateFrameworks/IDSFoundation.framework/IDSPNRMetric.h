
@interface IDSPNRMetric : NSObject <CUTCoreAnalyticsMetric> {
    long long  _mechanism;
    long long  _pnrReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mechanism;
@property (readonly) NSString *name;
@property (nonatomic) long long pnrReason;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (id)initWithPNRReason:(long long)arg1 mechanism:(long long)arg2;
- (long long)mechanism;
- (id)name;
- (long long)pnrReason;
- (void)setMechanism:(long long)arg1;
- (void)setPnrReason:(long long)arg1;

@end
