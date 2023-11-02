
@interface SFProximityEstimator : NSObject {
    int  _estimatedRSSI;
    int  _rssiEnter;
    int  _rssiExit;
    int  _rssiFar;
    int  _rssiImmediate;
    int  _rssiNear;
}

@property (nonatomic, readonly) int estimatedRSSI;

+ (id)proximityEstimatorWithProximityInfo:(id)arg1;

- (int)_estimateRSSIForSFBLEDevice:(id)arg1;
- (id)description;
- (id)descriptionParams;
- (int)estimatedRSSI;
- (id)initWithProximityInfo:(id)arg1;
- (unsigned int)updateWithSFBLEDevice:(id)arg1;

@end
