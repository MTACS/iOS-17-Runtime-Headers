
@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask

@property (nonatomic) <CoreDAVPrincipalSearchPropertySetTaskDelegate> *delegate;

- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithURL:(id)arg1;
- (id)requestBody;

@end
