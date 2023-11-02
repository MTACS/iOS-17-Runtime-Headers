
@interface PESCAPReviewManager : NSObject {
    NSMutableDictionary * _assetsMap;
}

+ (id)sharedReviewManager;

- (void).cxx_destruct;
- (void)clearAll;
- (id)init;
- (id)lastPasteBreadcrumb;
- (id)payloadForAsset:(id)arg1;
- (void)registerPayload:(id)arg1 forAsset:(id)arg2;

@end
