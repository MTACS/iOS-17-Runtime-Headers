
@interface ActivityUIServices.ActivityItemMetricsRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    void _edgeInsets;
    void _heightRequest;
    void _widthRequest;
    void clipMargin;
    void cornerRadius;
    void scaleFactor;
}

@property (nonatomic) double clipMargin;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC18ActivityUIServices18ActivityEdgeInsets *edgeInsets;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, retain) _TtC18ActivityUIServices20SizeDimensionRequest *heightRequest;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } initialSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) double scaleFactor;
@property (nonatomic, retain) _TtC18ActivityUIServices20SizeDimensionRequest *widthRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)clipMargin;
- (id)copyWithZone:(void*)arg1;
- (double)cornerRadius;
- (id)description;
- (id)edgeInsets;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)hash;
- (id)heightRequest;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3 edgeInsets:(id)arg4;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3 edgeInsets:(id)arg4 clipMargin:(double)arg5;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3 edgeInsets:(id)arg4 clipMargin:(double)arg5 scaleFactor:(double)arg6;
- (id)initWithXPCDictionary:(id)arg1;
- (struct CGSize { double x1; double x2; })initialSize;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })maximumSize;
- (double)scaleFactor;
- (void)setClipMargin:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEdgeInsets:(id)arg1;
- (void)setHeightRequest:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setWidthRequest:(id)arg1;
- (id)widthRequest;

@end
