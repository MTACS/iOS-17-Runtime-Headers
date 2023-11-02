
@interface SiriInteractive.LiveSceneMetrics : NSObject <BSXPCCoding, NSSecureCoding> {
    void cornerRadius;
    void size;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (bool)supportsSecureCoding;

- (double)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
