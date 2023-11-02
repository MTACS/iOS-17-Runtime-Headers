
@interface STKStickerUsageManager : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dictionary;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  serializationContextLocation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  serializationLocation;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)logStickerWithStickerIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (unsigned long long)stickerCountsForBundleIdentifier:(id)arg1;

@end
