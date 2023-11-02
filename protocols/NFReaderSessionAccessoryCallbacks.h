
@protocol NFReaderSessionAccessoryCallbacks <NSObject, NFSessionAccessoryCallbackInterface>

@required

- (void)didDetectTags:(NSArray *)arg1;
- (void)didTerminate:(NSError *)arg1;

@end
