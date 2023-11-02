
@interface _LSDeviceIdentifierManager : NSObject {
    NSMutableDictionary * _sharedCaches;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cacheForPersona:(id)arg1;
- (id)init;

@end
