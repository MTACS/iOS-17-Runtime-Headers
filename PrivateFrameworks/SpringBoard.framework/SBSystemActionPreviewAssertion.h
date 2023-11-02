
@interface SBSystemActionPreviewAssertion : NSObject <SBSystemActionPreviewInvalidatable> {
    bool  _expanding;
    NSMutableOrderedSet * _expansionInvalidationBlocks;
    id /* block */  _finalInvalidationBlock;
    NSString * _identifier;
    NSMutableOrderedSet * _invalidationBlocks;
    BSContinuousMachTimer * _invalidationTimer;
    double  _performedTime;
    bool  _prominent;
    NSString * _reason;
    SBSystemActionPreviewSettings * _settings;
    id /* block */  _urgencyInvalidationBlock;
    BSContinuousMachTimer * _urgencyInvalidationTimer;
    bool  _urgent;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpanding, nonatomic, readonly) bool expanding;
@property (readonly) unsigned long long hash;
@property (getter=isProminent, nonatomic, readonly) bool prominent;
@property (readonly) Class superclass;
@property (getter=isUrgent, nonatomic, readonly) bool urgent;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)acquireAssertionForInvalidatingAfterDefaultTimeoutForActionPerformed;
- (void)addExpansionInvalidationBlock:(id /* block */)arg1;
- (void)addInvalidationBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)invalidateAfterDefaultTimeoutForActionCancelled;
- (void)invalidateWithResult:(unsigned long long)arg1;
- (bool)isExpanding;
- (bool)isProminent;
- (bool)isUrgent;
- (bool)isValid;

@end
