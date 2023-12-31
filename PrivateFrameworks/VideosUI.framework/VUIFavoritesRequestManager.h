
@interface VUIFavoritesRequestManager : NSObject {
    NSMutableDictionary * _ongoingEntityIDOperationDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *ongoingEntityIDOperationDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (id)ongoingEntityIDOperationDictionary;
- (void)sendRequestForEntityID:(id)arg1 teamName:(id)arg2 action:(unsigned long long)arg3;
- (void)setOngoingEntityIDOperationDictionary:(id)arg1;

@end
