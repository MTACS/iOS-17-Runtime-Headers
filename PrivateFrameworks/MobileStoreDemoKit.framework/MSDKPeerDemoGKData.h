
@interface MSDKPeerDemoGKData : NSObject <NSSecureCoding> {
    bool  _dataValid;
    float  _offsetFromToleranceX;
    float  _offsetFromToleranceY;
    float  _offsetFromToleranceZ;
    float  _reliefBoxSpaceMM;
    float  _reliefTotalBoxSpaceMM;
}

@property (nonatomic) bool dataValid;
@property (nonatomic) float offsetFromToleranceX;
@property (nonatomic) float offsetFromToleranceY;
@property (nonatomic) float offsetFromToleranceZ;
@property (nonatomic) float reliefBoxSpaceMM;
@property (nonatomic) float reliefTotalBoxSpaceMM;

+ (bool)supportsSecureCoding;

- (void)addOffsetFromTolerance;
- (void)addReliefBoxSpaceMM:(float)arg1;
- (void)addReliefTotalBoxSpaceMM:(float)arg1;
- (bool)dataValid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)markAsValid;
- (float)offsetFromToleranceX;
- (float)offsetFromToleranceY;
- (float)offsetFromToleranceZ;
- (float)reliefBoxSpaceMM;
- (float)reliefTotalBoxSpaceMM;
- (void)setDataValid:(bool)arg1;
- (void)setOffsetFromToleranceX:(float)arg1;
- (void)setOffsetFromToleranceY:(float)arg1;
- (void)setOffsetFromToleranceZ:(float)arg1;
- (void)setReliefBoxSpaceMM:(float)arg1;
- (void)setReliefTotalBoxSpaceMM:(float)arg1;

@end
