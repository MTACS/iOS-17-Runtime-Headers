
@interface VKMetricsDescriptor : NSObject {
    long long  _carDisplayType;
    long long  _labelScaleFactor;
    long long  _shieldSize;
}

@property (nonatomic) long long carDisplayType;
@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) long long shieldSize;

- (long long)carDisplayType;
- (id)init;
- (long long)labelScaleFactor;
- (void)setCarDisplayType:(long long)arg1;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setShieldSize:(long long)arg1;
- (long long)shieldSize;

@end
