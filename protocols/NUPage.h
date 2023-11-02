
@protocol NUPage <NUPageStyling, NUPageNextActionable>

@required

- (void)activityProvider:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NUActivityProvider> *, void*
- (bool)allowNeighboringAdvertising;
- (NSString *)identifier;
- (void)prepare;
- (void)unprepare;
- (UIViewController<NUPageable> *)viewController;

@end
