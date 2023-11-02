
@protocol DEDSeedingClientDelegate <NSObject>

@required

- (void)uploadTask:(NSURLSessionUploadTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)uploadTask:(NSURLSessionUploadTask *)arg1 didSendBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;

@end
