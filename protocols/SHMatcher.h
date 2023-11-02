
@protocol SHMatcher <NSObject>

@required

- (<SHMatcherDelegate> *)delegate;
- (void)setDelegate:(id <SHMatcherDelegate>)arg1;
- (void)startRecognitionForRequest:(SHMatcherRequest *)arg1;
- (void)stopRecognition;
- (void)stopRecognitionForRequestID:(NSUUID *)arg1;

@end
