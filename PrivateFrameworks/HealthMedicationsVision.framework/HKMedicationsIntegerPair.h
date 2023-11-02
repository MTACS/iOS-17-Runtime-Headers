
@interface HKMedicationsIntegerPair : NSObject {
    long long  _first;
    long long  _second;
}

@property (nonatomic) long long first;
@property (nonatomic) long long second;

- (long long)first;
- (long long)second;
- (void)setFirst:(long long)arg1;
- (void)setSecond:(long long)arg1;

@end
