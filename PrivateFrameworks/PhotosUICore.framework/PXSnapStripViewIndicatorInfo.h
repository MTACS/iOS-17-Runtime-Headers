
@interface PXSnapStripViewIndicatorInfo : NSObject {
    UIColor * _color;
    bool  _disabled;
    double  _offset;
    unsigned long long  _style;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic) bool disabled;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) unsigned long long style;

- (void).cxx_destruct;
- (id)color;
- (bool)disabled;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOffset:(double)arg1 color:(id)arg2 style:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIndicatorInfo:(id)arg1;
- (double)offset;
- (void)setDisabled:(bool)arg1;
- (unsigned long long)style;

@end
