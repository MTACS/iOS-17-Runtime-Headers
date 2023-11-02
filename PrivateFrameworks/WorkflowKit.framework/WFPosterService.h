
@interface WFPosterService : NSObject

- (void)fetchEligiblePostersWithCompletionHandler:(id /* block */)arg1;
- (void)findPosterMatchingRepresentation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPostersWithCompletionHandler:(id /* block */)arg1;

@end
