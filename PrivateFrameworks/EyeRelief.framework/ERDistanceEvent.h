
@interface ERDistanceEvent : NSObject {
    bool  _didDetectAttention;
    float  _distance;
    long long  _distanceCategory;
}

@property (nonatomic) bool didDetectAttention;
@property (nonatomic) float distance;
@property (nonatomic) long long distanceCategory;

- (id)description;
- (bool)didDetectAttention;
- (float)distance;
- (long long)distanceCategory;
- (id)initWithDistance:(float)arg1 distanceCategory:(long long)arg2 andAttention:(bool)arg3;
- (void)setDidDetectAttention:(bool)arg1;
- (void)setDistance:(float)arg1;
- (void)setDistanceCategory:(long long)arg1;

@end
