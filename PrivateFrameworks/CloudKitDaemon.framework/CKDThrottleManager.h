
@interface CKDThrottleManager : CKThrottleManager {
    CKDLogicalDeviceContext * _deviceContext;
    CKThrottleTable * _throttleTable;
    CKDThrottleTableGroup * _throttleTableGroup;
}

@property (nonatomic, readonly) CKDLogicalDeviceContext *deviceContext;

+ (id)_expirationDateForTTLSeconds:(unsigned int)arg1;
+ (id)throttleFromPThrottlingConfig:(id)arg1;
+ (id)throttleFromServerJSONDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)addThrottle:(id)arg1;
- (id)deviceContext;
- (id)initWithDeviceContext:(id)arg1;
- (void)invalidateAdopterThrottles;
- (void)loadThrottlesFromDatabase;
- (void)noteDataChangeForThrottle:(id)arg1;
- (void)throttleListBecameEmpty;
- (id)throttleTable:(bool)arg1;
- (void)throttleWasAdded:(id)arg1;
- (void)throttleWillBeRemoved:(id)arg1;

@end
