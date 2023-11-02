
@interface CRLineWrappingClassifierOutput : NSObject {
    double  _wrappingProbability;
}

@property (nonatomic, readonly) double wrappingProbability;

- (id)initWithWrappingProbability:(double)arg1;
- (double)wrappingProbability;

@end
