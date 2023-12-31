
@protocol TSCH3DShaderStatement <NSObject>

@required

- (bool)isLinked;
- (struct TSCH3DShaderType { unsigned long long x1; })linkageType;
- (NSArray *)resolve;
- (void)setGeneratedForType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (NSString *)string;

@end
