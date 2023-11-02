
@interface UASharedPasteboard : NSObject {
    UASharedPasteboardManager * _manager;
}

@property UASharedPasteboardManager *manager;

+ (void)clearLocalPasteboardInformation;
+ (void)initialize;
+ (void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
+ (void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2;
+ (void)localPasteboardDidPasteGeneration:(unsigned long long)arg1;
+ (id)remotePasteboard;
+ (void)startPreventingPasteboardSharing;
+ (void)stopPreventingPasteboardSharing;

- (id)currentRemoteDeviceName;
- (id)manager;
- (void)prefetchRemotePasteboardTypes:(id)arg1;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(id /* block */)arg2;
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(id /* block */)arg2;
- (bool)returnPasteboardDataBeforeArchives;
- (void)setManager:(id)arg1;

@end
