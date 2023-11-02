
@protocol SBSBackgroundActivityAssertionClient <NSObject>

@required

- (void)invalidateBackgroundActivityAssertionsWithIdentifiers:(NSSet *)arg1;
- (void)statusBarTappedWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: SBSStatusBarBackgroundActivityTapContextImpl *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
