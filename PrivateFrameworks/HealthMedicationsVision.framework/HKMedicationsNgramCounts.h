
@interface HKMedicationsNgramCounts : NSObject {
    long long  _seen;
    long long  _used;
}

@property (nonatomic) long long seen;
@property (nonatomic) long long used;

- (long long)seen;
- (void)setSeen:(long long)arg1;
- (void)setUsed:(long long)arg1;
- (long long)used;

@end
