
@interface VUIDocumentPreFetchedDataPlaybackUpNext : VUIDocumentPreFetchedData {
    NSString * _adamID;
    bool  _canAutoPlay;
    NSArray * _excludedCanonicals;
    NSString * _host;
    bool  _isLiveStream;
    bool  _isPostPlay;
    NSString * _productID;
    bool  _refetchUpNextData;
    NSString * _showID;
    bool  _updateEvent;
}

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic) bool canAutoPlay;
@property (nonatomic, copy) NSArray *excludedCanonicals;
@property (nonatomic, copy) NSString *host;
@property (nonatomic) bool isLiveStream;
@property (nonatomic) bool isPostPlay;
@property (nonatomic, copy) NSString *productID;
@property (nonatomic) bool refetchUpNextData;
@property (nonatomic, copy) NSString *showID;
@property (nonatomic) bool updateEvent;

- (void).cxx_destruct;
- (id)adamID;
- (bool)canAutoPlay;
- (id)excludedCanonicals;
- (id)host;
- (bool)isLiveStream;
- (bool)isPostPlay;
- (id)jsonData;
- (id)productID;
- (bool)refetchUpNextData;
- (void)setAdamID:(id)arg1;
- (void)setCanAutoPlay:(bool)arg1;
- (void)setExcludedCanonicals:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setIsLiveStream:(bool)arg1;
- (void)setIsPostPlay:(bool)arg1;
- (void)setProductID:(id)arg1;
- (void)setRefetchUpNextData:(bool)arg1;
- (void)setShowID:(id)arg1;
- (void)setUpdateEvent:(bool)arg1;
- (id)showID;
- (bool)updateEvent;

@end
