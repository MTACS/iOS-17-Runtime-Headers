
@interface PKGradientVerticalConnector : NSObject {
    UIColor * _bottomGradientColor;
    UIColor * _topGradientColor;
}

@property (nonatomic, readonly) UIColor *bottomGradientColor;
@property (nonatomic, readonly) UIColor *topGradientColor;

- (void).cxx_destruct;
- (id)bottomGradientColor;
- (unsigned long long)hash;
- (id)initWithTopGradientColor:(id)arg1 bottomGradientColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)topGradientColor;

@end
