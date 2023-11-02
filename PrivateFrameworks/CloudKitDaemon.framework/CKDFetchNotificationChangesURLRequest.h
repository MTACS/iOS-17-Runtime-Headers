
@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest {
    bool  _moreComing;
    NSMutableArray * _resultChangedNotifications;
    NSData * _resultServerChangeTokenData;
    unsigned long long  _resultsLimit;
    NSData * _serverChangeTokenData;
    bool  _wantsChanges;
}

@property (nonatomic) bool moreComing;
@property (nonatomic, readonly) NSArray *resultChangedNotifications;
@property (nonatomic, retain) NSData *resultServerChangeTokenData;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) NSData *serverChangeTokenData;
@property (nonatomic) bool wantsChanges;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 serverChangeTokenData:(id)arg2;
- (bool)moreComing;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)resultChangedNotifications;
- (id)resultServerChangeTokenData;
- (unsigned long long)resultsLimit;
- (id)serverChangeTokenData;
- (void)setMoreComing:(bool)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setWantsChanges:(bool)arg1;
- (bool)wantsChanges;

@end
