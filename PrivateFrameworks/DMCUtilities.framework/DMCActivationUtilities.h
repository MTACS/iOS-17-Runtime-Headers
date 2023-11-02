
@interface DMCActivationUtilities : NSObject {
    NSDictionary * _activationRecordCache;
    NSMutableDictionary * _didBecomeReadyCallbacks;
    NSNumber * _hrnModeCache;
    bool  _isActivatedCache;
    bool  _isReady;
}

@property (nonatomic, retain) NSDictionary *activationRecordCache;
@property (nonatomic, retain) NSMutableDictionary *didBecomeReadyCallbacks;
@property (nonatomic, retain) NSNumber *hrnModeCache;
@property (nonatomic) bool isActivatedCache;
@property (nonatomic) bool isReady;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearCache;
- (id)activationRecord;
- (id)activationRecordCache;
- (int)activationState;
- (void)addDidBecomeReadyKey:(id)arg1 callback:(id /* block */)arg2;
- (id)didBecomeReadyCallbacks;
- (int)hrnMode;
- (id)hrnModeCache;
- (id)initPrivate;
- (bool)isActivatedCache;
- (bool)isReady;
- (void)setActivationRecordCache:(id)arg1;
- (void)setDidBecomeReadyCallbacks:(id)arg1;
- (void)setHrnModeCache:(id)arg1;
- (void)setIsActivatedCache:(bool)arg1;
- (void)setIsReady:(bool)arg1;

@end
