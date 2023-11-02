
@interface VUICloudClient : NSObject {
    NSMutableDictionary * _artworkMap;
}

@property (nonatomic, retain) NSMutableDictionary *artworkMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)artworkMap;
- (id)init;
- (void)loadArtworkURLsForPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setArtworkMap:(id)arg1;

@end
