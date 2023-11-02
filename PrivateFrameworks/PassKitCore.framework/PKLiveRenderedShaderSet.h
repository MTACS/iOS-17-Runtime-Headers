
@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding> {
    NSString * _fragmentEntryPointShader;
    NSString * _geometryEntryPointShader;
    NSString * _lightingModelEntryPointShader;
    NSString * _surfaceEntryPointShader;
}

@property (nonatomic, readonly, copy) NSString *fragmentEntryPointShader;
@property (nonatomic, readonly, copy) NSString *geometryEntryPointShader;
@property (nonatomic, readonly, copy) NSString *lightingModelEntryPointShader;
@property (nonatomic, readonly, copy) NSString *surfaceEntryPointShader;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fragmentEntryPointShader;
- (id)geometryEntryPointShader;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataAccessor:(id)arg1 suffix:(id)arg2;
- (id)lightingModelEntryPointShader;
- (id)surfaceEntryPointShader;

@end
