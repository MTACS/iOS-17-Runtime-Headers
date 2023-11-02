
@interface SNNComputeUnit : NSObject {
    long long  _kind;
}

@property (nonatomic, readonly) unsigned long long bitmask;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) long long order;
@property (nonatomic, readonly) int platform;

+ (unsigned long long)bitmakForComputeUnits:(id)arg1;

- (unsigned long long)bitmask;
- (id)initWithComputeUnitKind:(long long)arg1;
- (long long)kind;
- (long long)order;
- (int)platform;

@end
