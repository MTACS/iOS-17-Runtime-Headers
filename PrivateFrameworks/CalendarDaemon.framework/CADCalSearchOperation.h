
@interface CADCalSearchOperation : NSOperation <CalSearchDataSink> {
    <NSObject> * _boostToken;
    NSArray * _calendars;
    ClientConnection * _connection;
    int  _currentDatabaseID;
    CalSearch * _currentSearch;
    NSObject<OS_dispatch_semaphore> * _finishedSemaphore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _objectIDsForPrivacyAccounting;
    unsigned int  _replyID;
    NSString * _searchTerm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)operationWithConnection:(id)arg1 searchTerm:(id)arg2 calendars:(id)arg3 replyID:(unsigned int)arg4;

- (void).cxx_destruct;
- (void)_completeOperation;
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray { }*)arg2 cachedDays:(struct __CFArray { }*)arg3 cachedDaysIndexes:(struct __CFArray { }*)arg4;
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (void)calSearchComplete:(id)arg1;
- (bool)calSearchShouldStopSearching:(id)arg1;
- (void)cancel;
- (void)configureSearch:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 searchTerm:(id)arg2 calendars:(id)arg3 replyID:(unsigned int)arg4;
- (void)main;
- (unsigned int)replyID;

@end
