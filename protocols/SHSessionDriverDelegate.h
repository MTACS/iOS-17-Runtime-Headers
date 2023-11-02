
@protocol SHSessionDriverDelegate <NSObject>

@required

- (void)matchSignature:(SHSignature *)arg1;
- (void)sessionDriverEncounteredUnrecoverableError:(NSError *)arg1 forSignature:(SHSignature *)arg2;

@optional

- (bool)shouldGenerateSpectralOutput;

@end
