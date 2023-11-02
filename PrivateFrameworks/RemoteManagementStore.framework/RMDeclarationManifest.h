
@interface RMDeclarationManifest : NSObject <NSSecureCoding> {
    NSArray * _activations;
    NSArray * _assets;
    NSArray * _configurations;
    NSArray * _management;
}

@property (nonatomic, readonly, copy) NSArray *activations;
@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly, copy) NSArray *configurations;
@property (nonatomic, readonly, copy) NSArray *management;

+ (id)declarationManifestWithDeclarations:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activations;
- (id)assets;
- (id)configurations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3 management:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToManifest:(id)arg1;
- (id)management;

@end
