
@interface PLExclusiveFileLock : NSObject <PLUnlocker> {
    int  _fd;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLocked;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isLocked;
- (id)lockData;
- (id)lockFailure;
- (bool)lockWithError:(id*)arg1;
- (void)unlock;

@end
