
@interface WBSNamedColorOption : NSObject <NSSecureCoding> {
    NSString * _accessibilityName;
    double  _alphaComponent;
    double  _blueComponent;
    NSString * _colorName;
    double  _greenComponent;
    double  _redComponent;
}

@property (nonatomic, readonly, copy) NSString *accessibilityName;
@property (nonatomic, readonly) double alphaComponent;
@property (nonatomic, readonly) double blueComponent;
@property (nonatomic, readonly, copy) NSString *colorName;
@property (nonatomic, readonly) double greenComponent;
@property (nonatomic, readonly) bool isClearColor;
@property (nonatomic, readonly) double redComponent;

+ (id)colorWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityName;
- (double)alphaComponent;
- (double)blueComponent;
- (id)colorName;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (double)greenComponent;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorName:(id)arg1 red:(double)arg2 green:(double)arg3 blue:(double)arg4 alpha:(double)arg5 accessibilityName:(id)arg6;
- (bool)isClearColor;
- (bool)isEqual:(id)arg1;
- (double)redComponent;

@end
