
@interface PKCustomTool : PKTool {
    NSString * _customIdentifier;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly, copy) PKToolConfiguration *customConfigurationCopy;
@property (nonatomic, readonly) NSString *customIdentifier;
@property (nonatomic, readonly) double weight;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithColor:(id)arg1;
- (id)copyWithScrubbedColor:(id)arg1;
- (id)copyWithScrubbedWeight:(double)arg1;
- (id)copyWithWeight:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customConfigurationCopy;
- (id)customIdentifier;
- (unsigned long long)hash;
- (id)initWithCustomIdentifier:(id)arg1 configuration:(id)arg2 color:(id)arg3 weight:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)weight;

@end
