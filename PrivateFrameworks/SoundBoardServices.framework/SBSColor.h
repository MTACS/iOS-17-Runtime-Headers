
@interface SBSColor : NSObject <NSSecureCoding> {
    float  _blueComponent;
    float  _greenComponent;
    float  _redComponent;
}

@property (nonatomic, readonly) float blueComponent;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) float greenComponent;
@property (nonatomic, readonly) float redComponent;

+ (bool)supportsSecureCoding;

- (float)blueComponent;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (float)greenComponent;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (float)redComponent;

@end
