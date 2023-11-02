
@protocol DKFindMyProvider <NSObject>

@required

- (void)disableFindMyWithPresentingViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)fetchFindMyState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)preheatFindMyState;

@end
