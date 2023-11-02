
@protocol ICSInputByteStream <NSObject>

@required

- (bool)eos;
- (BOOL)read;

@end
