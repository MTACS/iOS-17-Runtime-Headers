
@interface AVSemanticStyle : NSObject {
    unsigned long long  _hash;
    float  _subjectBias;
    float  _toneBias;
    float  _warmthBias;
}

@property (nonatomic, readonly) float sceneBias;
@property (nonatomic, readonly) float subjectBias;
@property (nonatomic, readonly) float toneBias;
@property (nonatomic, readonly) float warmthBias;

+ (id)identityStyle;
+ (id)semanticStyleWithToneBias:(float)arg1 warmthBias:(float)arg2;

- (id)_initWithToneBias:(float)arg1 warmthBias:(float)arg2;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)sceneBias;
- (float)subjectBias;
- (float)toneBias;
- (float)warmthBias;

@end
