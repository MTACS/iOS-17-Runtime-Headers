
@interface CRTitleParameters : NSObject {
    unsigned long long  _minTitleLength;
    float  _minTitleProbability;
}

@property (readonly) unsigned long long minTitleLength;
@property (readonly) float minTitleProbability;

+ (id)defaultTitleParameters;

- (id)initWithMinTitleProbability:(float)arg1 minTitleLength:(unsigned long long)arg2;
- (unsigned long long)minTitleLength;
- (float)minTitleProbability;

@end
