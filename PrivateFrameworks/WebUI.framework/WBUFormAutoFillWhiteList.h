
@interface WBUFormAutoFillWhiteList : NSObject {
    NSCache * _cache;
}

+ (id)sharedAutoFillWhiteList;

- (void).cxx_destruct;
- (void)_whiteListSettingsChanged:(id)arg1;
- (bool)allowsURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end
