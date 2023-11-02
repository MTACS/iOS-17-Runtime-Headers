
@interface BKEnrollPearlResultInfo : BKEnrollResultInfo {
    bool  _glassesDetected;
}

@property (nonatomic, readonly) bool glassesDetected;

- (bool)glassesDetected;
- (id)initWithServerIdentity:(id)arg1 details:(id)arg2 device:(id)arg3;

@end
