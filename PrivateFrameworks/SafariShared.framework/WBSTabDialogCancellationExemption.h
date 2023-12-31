
@interface WBSTabDialogCancellationExemption : NSObject {
    id /* block */  _cancellationExemptionHandler;
}

+ (id)committedNavigationExemption;
+ (id)provisionalNavigationExemption;
+ (id)sameOriginNavigationExemption:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCancellationHandler:(id /* block */)arg1;
- (bool)isExemptFromCancellationInContext:(id)arg1;

@end
