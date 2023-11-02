
@protocol FCCurrentIssuesChecker <NSObject>

@required

- (void)fetchUsersCurrentIssuesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCCurrentIssuesCheckerResult *, void*
- (void)fetchUsersFollowedIssuesWithQualityOfService:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
