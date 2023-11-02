
@protocol SBIconAnimatorDelegate <NSObject>

@required

- (void)iconAnimatorWasInvalidated:(SBIconAnimator *)arg1;

@optional

- (bool)iconAnimator:(void *)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(void *)arg2; // needs 2 arg types, found 6: SBIconAnimator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
