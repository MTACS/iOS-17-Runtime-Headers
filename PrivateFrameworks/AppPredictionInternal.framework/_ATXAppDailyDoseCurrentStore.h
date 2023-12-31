
@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSMutableDictionary * _cache;
    NSDate * _expires;
    _Atomic int  _fd;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_getCacheFromFile;
- (void)_openFd;
- (void)_overwrite;
- (void)_readCacheAndExpiration;
- (void)closePermanently;
- (double)currentDoseFor:(id)arg1;
- (void)dealloc;
- (void)increaseDoseFor:(id)arg1 by:(double)arg2;
- (id)init;
- (id)initWithPath:(id)arg1;
- (bool)isExpiredAt:(id)arg1;
- (bool)isExpiredNow;
- (void)resetWithDurationMap:(id)arg1 on:(id)arg2;

@end
