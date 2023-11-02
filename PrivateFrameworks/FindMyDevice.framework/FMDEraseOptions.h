
@interface FMDEraseOptions : NSObject <NSSecureCoding> {
    bool  _brickDevice;
    double  _customDelay;
    bool  _hasBridgeCoProcessor;
    double  _maxDelayInterval;
    bool  _useObliteration;
}

@property (nonatomic) bool brickDevice;
@property (nonatomic) double customDelay;
@property (nonatomic) bool hasBridgeCoProcessor;
@property (nonatomic) double maxDelayInterval;
@property (nonatomic) bool useObliteration;

+ (bool)supportsSecureCoding;

- (bool)brickDevice;
- (double)customDelay;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBridgeCoProcessor;
- (id)initWithCoder:(id)arg1;
- (double)maxDelayInterval;
- (void)setBrickDevice:(bool)arg1;
- (void)setCustomDelay:(double)arg1;
- (void)setHasBridgeCoProcessor:(bool)arg1;
- (void)setMaxDelayInterval:(double)arg1;
- (void)setUseObliteration:(bool)arg1;
- (bool)useObliteration;

@end
