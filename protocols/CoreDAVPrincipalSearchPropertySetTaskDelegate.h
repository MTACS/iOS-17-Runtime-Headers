
@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate <CoreDAVTaskDelegate>

@optional

- (void)searchPropertySetTask:(CoreDAVPrincipalSearchPropertySetTask *)arg1 completetWithPropertySearchSet:(NSSet *)arg2 error:(NSError *)arg3;

@end
