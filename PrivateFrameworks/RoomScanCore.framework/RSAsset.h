
@interface RSAsset : NSObject <NSCopying, NSSecureCoding> {
    RSFloorPlan * _floorPlan;
    bool  _isCaptured;
    NSArray * _mirrorPoints;
    RSFloorPlan * _rawFloorPlan;
    long long  _version;
}

@property (nonatomic, readonly) RSFloorPlan *floorPlan;
@property (nonatomic, readonly) NSArray *mirrorPoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)floorPlan;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mirrorPoints;

@end
