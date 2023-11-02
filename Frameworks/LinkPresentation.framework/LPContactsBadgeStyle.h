
@interface LPContactsBadgeStyle : NSObject {
    double  _iconOffset;
    long long  _location;
    double  _margin;
    LPPointUnit * _size;
    bool  _useShadow;
}

@property (nonatomic) double iconOffset;
@property (nonatomic) long long location;
@property (nonatomic) double margin;
@property (nonatomic, retain) LPPointUnit *size;
@property (nonatomic) bool useShadow;

- (void).cxx_destruct;
- (double)iconOffset;
- (id)initWithPlatform:(long long)arg1;
- (long long)location;
- (double)margin;
- (void)setIconOffset:(double)arg1;
- (void)setLocation:(long long)arg1;
- (void)setMargin:(double)arg1;
- (void)setSize:(id)arg1;
- (void)setUseShadow:(bool)arg1;
- (id)size;
- (bool)useShadow;

@end
