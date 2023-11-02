
@protocol SBSystemActionPreviewInvalidatable <NSObject>

@required

- (<BSInvalidatable> *)acquireAssertionForInvalidatingAfterDefaultTimeoutForActionPerformed;
- (void)addExpansionInvalidationBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBSystemActionPreviewInvalidatable> *, unsigned long long, void*
- (void)addInvalidationBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBSystemActionPreviewInvalidatable> *, unsigned long long, void*
- (void)invalidateAfterDefaultTimeoutForActionCancelled;
- (void)invalidateWithResult:(unsigned long long)arg1;
- (bool)isExpanding;
- (bool)isProminent;
- (bool)isUrgent;
- (bool)isValid;

@end
