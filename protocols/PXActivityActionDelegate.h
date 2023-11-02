
@protocol PXActivityActionDelegate <NSObject>

@required

- (bool)canPerformWithActivityItems:(NSArray *)arg1 forActivity:(PXActivity *)arg2;
- (void)performActivity:(PXActivity *)arg1;

@optional

- (void)activity:(PXActivity *)arg1 didFinishWithSuccess:(bool)arg2 error:(NSError *)arg3;

@end
