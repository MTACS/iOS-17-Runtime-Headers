
@protocol CoreDAVPropFindTaskDelegate <CoreDAVTaskDelegate>

@optional

- (void)propFindTask:(CoreDAVPropFindTask *)arg1 parsedResponses:(NSArray *)arg2 error:(NSError *)arg3;

@end
