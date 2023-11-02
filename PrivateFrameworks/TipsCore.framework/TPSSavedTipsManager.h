
@interface TPSSavedTipsManager : NSObject {
    void queue;
    void savedTipsMap;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)removeInvalidEntries;
- (id)savedDateWithCorrelationId:(id)arg1;
- (void)updateSavedTipsWithCorrelationId:(id)arg1 savedDate:(id)arg2 lastUsedVersion:(id)arg3;

@end
