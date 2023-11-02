
@interface ACUISActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices26ActivityItemMetricsRequest * _itemMetricsRequest;
}

@property (nonatomic) double clipMargin;
@property (nonatomic) double cornerRadius;
@property (nonatomic) ACUISEdgeInsets *edgeInsets;
@property (nonatomic, copy) ACUISSizeDimensionRequest *heightRequest;
@property (nonatomic) double scaleFactor;
@property (nonatomic, copy) ACUISSizeDimensionRequest *widthRequest;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activityItemMetricsRequest;
- (id)_initWithItemMetrics:(id)arg1;
- (double)clipMargin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)description;
- (id)edgeInsets;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)heightRequest;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3 edgeInsets:(id)arg4;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3 edgeInsets:(id)arg4 clipMargin:(double)arg5;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3 edgeInsets:(id)arg4 clipMargin:(double)arg5 scaleFactor:(double)arg6;
- (struct CGSize { double x1; double x2; })initialSize;
- (bool)isEqual:(id)arg1;
- (double)scaleFactor;
- (void)setClipMargin:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEdgeInsets:(id)arg1;
- (void)setHeightRequest:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setWidthRequest:(id)arg1;
- (id)widthRequest;

@end
