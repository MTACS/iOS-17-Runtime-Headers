
@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry> {
    NSString * _UUIDString;
    long long  _databaseID;
    bool  _higherPriorityIconDownloadFailedDueToNetworkError;
    NSString * _host;
    bool  _iconInCache;
    NSDate * _lastRequestDate;
    bool  _lastRequestWasInUserLoadedWebpage;
    long long  _lastResponseStatusCode;
    long long  _requestCount;
    bool  _requestDidSucceed;
    long long  _transparencyAnalysisResult;
}

@property (nonatomic, readonly, copy) NSString *UUIDString;
@property (nonatomic, readonly) long long databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long downloadStatusFlags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool higherPriorityIconDownloadFailedDueToNetworkError;
@property (nonatomic, readonly, copy) NSString *host;
@property (getter=isIconInCache, nonatomic, readonly) bool iconInCache;
@property (nonatomic, readonly) NSDate *lastRequestDate;
@property (nonatomic, readonly) bool lastRequestWasInUserLoadedWebpage;
@property (nonatomic, readonly) long long lastResponseStatusCode;
@property (nonatomic, readonly) long long requestCount;
@property (nonatomic, readonly) bool requestDidSucceed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long transparencyAnalysisResult;

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(bool)arg3 requestCount:(long long)arg4 iconInCache:(bool)arg5 requestDidSucceed:(bool)arg6 lastResponseStatusCode:(long long)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg9 UUIDString:(id)arg10;

- (void).cxx_destruct;
- (id)UUIDString;
- (long long)databaseID;
- (id)description;
- (unsigned long long)downloadStatusFlags;
- (id)entryByAddingRequestInUserLoadedWebPage:(bool)arg1 isIconInCache:(bool)arg2 requestDidSucceed:(bool)arg3 lastResponseStatusCode:(long long)arg4 transparencyAnalysisResult:(long long)arg5 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg6 UUIDString:(id)arg7;
- (id)entryWithDatabaseID:(long long)arg1;
- (id)entryWithTransparencyAnalysisResult:(long long)arg1;
- (unsigned long long)hash;
- (bool)higherPriorityIconDownloadFailedDueToNetworkError;
- (id)host;
- (id)init;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(bool)arg3 requestCount:(long long)arg4 iconInCache:(bool)arg5 requestDidSucceed:(bool)arg6 lastResponseStatusCode:(long long)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg9 UUIDString:(id)arg10;
- (id)initWithSQLiteRow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIconInCache;
- (id)lastRequestDate;
- (bool)lastRequestWasInUserLoadedWebpage;
- (long long)lastResponseStatusCode;
- (long long)requestCount;
- (bool)requestDidSucceed;
- (long long)transparencyAnalysisResult;

@end
