
@interface NTKExplorerDotColorOptions : NSObject <NSCopying, NSSecureCoding> {
    UIColor * _connectedDotBackgroundColor;
    UIColor * _connectedDotColor;
    UIColor * _noServiceDotColor;
}

@property (nonatomic, retain) UIColor *connectedDotBackgroundColor;
@property (nonatomic, retain) UIColor *connectedDotColor;
@property (nonatomic, retain) UIColor *noServiceDotColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectedDotBackgroundColor;
- (id)connectedDotColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)noServiceDotColor;
- (void)setConnectedDotBackgroundColor:(id)arg1;
- (void)setConnectedDotColor:(id)arg1;
- (void)setNoServiceDotColor:(id)arg1;

@end
