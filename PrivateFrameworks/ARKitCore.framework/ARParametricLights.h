
@interface ARParametricLights : NSObject <ARDaemonSecureCoding> {
    void _ambientColor;
    NSArray * _areaLights;
}

@property (nonatomic, readonly) void ambientColor;
@property (nonatomic, readonly) NSArray *areaLights;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)ambientColor;
- (id)areaLights;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAmbientColor:(void *)arg1 areaLights:(void *)arg2; // needs 2 arg types, found 1: id
- (id)initWithCoder:(id)arg1;

@end
