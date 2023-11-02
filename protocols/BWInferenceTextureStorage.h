
@protocol BWInferenceTextureStorage <NSObject>

@required

- (struct { union { id x_1_1_1; id x_1_1_2; } x1; id x2; }*)entryForRequirement:(BWInferenceVideoRequirement *)arg1;
- (void)setEntry:(struct { union { id x_1_1_1; id x_1_1_2; } x1; id x2; }*)arg1 forRequirement:(BWInferenceVideoRequirement *)arg2;
- (void)setTexture:(id <MTLTexture>)arg1 forRequirement:(BWInferenceVideoRequirement *)arg2;

@end
