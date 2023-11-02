
@interface SGSuggestionsWorkGroupManager : NSObject {
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)finishProcessingForUniqueIdentifier:(id)arg1;
- (void)waitForUniqueIdentifierToProcess:(id)arg1;
- (void)waitForUniqueIdentifierToProcess:(id)arg1 withTimeout:(double)arg2;

@end
