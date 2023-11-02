
@interface SiriInteractive.LiveSceneItemMetricsRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    void _heightRequest;
    void _widthRequest;
    void cornerRadius;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, retain) _TtC15SiriInteractive20SizeDimensionRequest *heightRequest;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } initialSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, retain) _TtC15SiriInteractive20SizeDimensionRequest *widthRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (double)cornerRadius;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)hash;
- (id)heightRequest;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(id)arg1 height:(id)arg2 cornerRadius:(double)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (struct CGSize { double x1; double x2; })initialSize;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })maximumSize;
- (void)setCornerRadius:(double)arg1;
- (void)setHeightRequest:(id)arg1;
- (void)setWidthRequest:(id)arg1;
- (id)widthRequest;

@end
