
@protocol NFReaderSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didDetectExternalReaderWithNotification:(NFFieldNotification *)arg1;
- (void)didDetectNDEFMessages:(void *)arg1 fromTags:(void *)arg2 connectedTagIndex:(void *)arg3 updateUICallback:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)didDetectTags:(NSArray *)arg1 connectedTagIndex:(unsigned long long)arg2;
- (void)didTerminate:(NSError *)arg1;
- (void)didUIControllerInvalidate:(NSError *)arg1;

@end
