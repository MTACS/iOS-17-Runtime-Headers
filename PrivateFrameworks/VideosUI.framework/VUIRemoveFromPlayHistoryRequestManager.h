
@interface VUIRemoveFromPlayHistoryRequestManager : NSObject {
    NSMutableDictionary * _ongoingDeleteIDOperationDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *ongoingDeleteIDOperationDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (id)ongoingDeleteIDOperationDictionary;
- (void)sendRequestForDeleteID:(id)arg1 isContinueWatching:(bool)arg2;
- (void)setOngoingDeleteIDOperationDictionary:(id)arg1;

@end
