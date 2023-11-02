
@interface ActivityUIServices.ActivitySceneMetrics : NSObject <BSXPCCoding, NSSecureCoding> {
    void cornerRadius;
    void edgeInsets;
    void size;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC18ActivityUIServices18ActivityEdgeInsets *edgeInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)cornerRadius;
- (id)description;
- (id)edgeInsets;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 edgeInsets:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEdgeInsets:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
