
@interface CACSignPostLog : NSObject {
    unsigned long long  _currentPerfID;
}

@property (nonatomic) unsigned long long currentPerfID;

+ (void)CommandStringExecuted:(id)arg1 success:(bool)arg2;
+ (void)CommandStringReceived:(id)arg1;
+ (void)FetchElementsEventBeganWithReason:(id)arg1 expectedDelay:(double)arg2;
+ (void)FetchElementsEventCompletedWithNumberOfElements:(unsigned long long)arg1 numberOfElementsAlreadyCached:(unsigned long long)arg2;
+ (id)_sFetchElementsLog;
+ (id)sharedInstance;
+ (id)sharedLog;

- (unsigned long long)currentPerfID;
- (void)setCurrentPerfID:(unsigned long long)arg1;

@end
