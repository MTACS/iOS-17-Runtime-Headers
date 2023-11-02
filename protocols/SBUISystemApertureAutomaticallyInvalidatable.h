
@protocol SBUISystemApertureAutomaticallyInvalidatable <NSObject>

@required

- (void)addInvalidationBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBUISystemApertureAutomaticallyInvalidatable> *, NSString *, void*
- (void)invalidateWithReason:(NSString *)arg1;
- (bool)isAutomaticallyInvalidatable;
- (bool)isValid;
- (void)resetAutomaticInvalidationTimer;
- (void)setAutomaticallyInvalidatable:(bool)arg1;

@end
