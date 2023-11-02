
@interface FBKRequestsLog : NSObject {
    bool  _isActive;
    NSURL * _requestDirectoryURL;
    NSObject<OS_dispatch_queue> * _requestSaveQueue;
    NSMutableArray * _requests;
}

@property bool isActive;
@property (retain) NSURL *requestDirectoryURL;
@property (retain) NSObject<OS_dispatch_queue> *requestSaveQueue;
@property (retain) NSMutableArray *requests;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addRequest:(id)arg1;
- (bool)active;
- (void)addRequest:(id)arg1;
- (id)init;
- (void)insertObject:(id)arg1 inRequestsAtIndex:(unsigned long long)arg2;
- (bool)isActive;
- (id)mutableArrayValueForKey:(id)arg1;
- (void)removeObjectFromRequestsAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInRequestsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)requestDirectoryURL;
- (id)requestSaveQueue;
- (id)requests;
- (void)setIsActive:(bool)arg1;
- (void)setRequestDirectoryURL:(id)arg1;
- (void)setRequestSaveQueue:(id)arg1;
- (void)setRequests:(id)arg1;

@end
