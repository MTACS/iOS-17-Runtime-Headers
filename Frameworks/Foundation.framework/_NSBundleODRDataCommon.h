
@interface _NSBundleODRDataCommon : NSObject {
    NSMutableDictionary * _assetPackToURL;
    NSBundle * _bundle;
    NSLock * _lock;
    long long  _sandboxToken;
}

- (bool)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2;
- (bool)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end
