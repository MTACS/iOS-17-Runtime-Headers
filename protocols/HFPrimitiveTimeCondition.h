
@protocol HFPrimitiveTimeCondition <NSObject>

@required

- (long long)compare:(HFTimeCondition *)arg1;
- (unsigned long long)comparisonType;

@end
