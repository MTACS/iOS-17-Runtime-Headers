
@interface MFWebKitMainThread : NSObject {
    struct __CFDictionary { } * _visibleDict;
    MFLock * _visibleDictLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_mainThreadPopulateDictForMimeType:(id)arg1;
- (void)dealloc;
- (int)dictValueForMimeType:(id)arg1;
- (id)init;

@end
