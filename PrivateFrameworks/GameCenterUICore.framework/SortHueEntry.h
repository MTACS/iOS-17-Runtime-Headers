
@interface SortHueEntry : NSObject {
    long long  _count;
    long long  _hue;
}

@property (nonatomic) long long count;
@property (nonatomic) long long hue;

- (long long)count;
- (id)description;
- (long long)hue;
- (id)initWithHue:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setCount:(long long)arg1;
- (void)setHue:(long long)arg1;

@end
