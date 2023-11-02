
@protocol SXActionActivity <NSObject>

@required

- (UIImage *)image;
- (void)invokeWithAction:(id <SXAction>)arg1 invocationMethod:(unsigned long long)arg2;
- (NSString *)label;
- (unsigned long long)type;

@end
