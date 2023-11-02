
@protocol _DASExtensionRunner <NSObject>

@required

- (bool)prepareForActivity:(_DASActivity *)arg1;
- (unsigned char)start;
- (void)stop;

@end
