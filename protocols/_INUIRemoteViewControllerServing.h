
@protocol _INUIRemoteViewControllerServing <NSObject>

@required

- (void)configureForParameters:(void *)arg1 ofInteraction:(void *)arg2 interactiveBehavior:(void *)arg3 context:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: NSSet *, INInteraction *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, struct CGSize { double x1; double x2; }, NSError *, void*
- (void)desiresInteractivity:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)queryRepresentedPropertiesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)viewWasCancelled;

@end
