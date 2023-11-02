
@interface VUIMarkAsWatchedRequestManager : NSObject {
    NSMutableDictionary * _ongoingItemIDOperationDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *ongoingItemIDOperationDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (id)ongoingItemIDOperationDictionary;
- (void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3 adamID:(id)arg4;
- (void)setOngoingItemIDOperationDictionary:(id)arg1;

@end
