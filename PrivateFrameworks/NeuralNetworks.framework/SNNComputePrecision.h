
@interface SNNComputePrecision : NSObject {
    long long  _kind;
}

@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) int storageType;

- (id)initWithComputePrecisionKind:(long long)arg1;
- (long long)kind;
- (int)storageType;

@end
