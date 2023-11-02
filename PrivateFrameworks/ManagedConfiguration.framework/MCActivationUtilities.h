
@interface MCActivationUtilities : NSObject {
    NSDictionary * _activationRecordCache;
    NSMutableDictionary * _didBecomeReadyCallbacks;
    bool  _isActivatedCache;
    NSNumber * _isHRNModeCache;
    bool  _isReady;
}

@property (nonatomic, retain) NSDictionary *activationRecordCache;
@property (nonatomic, retain) NSMutableDictionary *didBecomeReadyCallbacks;
@property (nonatomic) bool isActivatedCache;
@property (nonatomic, retain) NSNumber *isHRNModeCache;
@property (nonatomic) bool isReady;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearCache;
- (id)activationRecord;
- (id)activationRecordCache;
- (void)addDidBecomeReadyKey:(id)arg1 callback:(id /* block */)arg2;
- (id)didBecomeReadyCallbacks;
- (id)init;
- (id)initPrivate;
- (int)isActivated;
- (bool)isActivatedCache;
- (int)isHRNMode;
- (id)isHRNModeCache;
- (bool)isReady;
- (void)setActivationRecordCache:(id)arg1;
- (void)setDidBecomeReadyCallbacks:(id)arg1;
- (void)setIsActivatedCache:(bool)arg1;
- (void)setIsHRNModeCache:(id)arg1;
- (void)setIsReady:(bool)arg1;

@end
