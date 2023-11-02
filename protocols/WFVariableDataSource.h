
@protocol WFVariableDataSource

@required

- (void)captureFileRepresentation:(WFFileRepresentation *)arg1;
- (<WFPropertyListObject> *)contentForPrivateVariableKey:(NSString *)arg1;
- (WFContentCollection *)contentForVariableWithName:(NSString *)arg1;
- (id)environmentValueForKey:(NSString *)arg1;
- (NSDictionary *)listenerEndpoints;
- (void)requestAccessToFileAtLocations:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestAccessToFileAtURLs:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setContent:(id <WFPropertyListObject>)arg1 forPrivateVariableKey:(NSString *)arg2;
- (bool)setContent:(WFContentCollection *)arg1 forVariableWithName:(NSString *)arg2;
- (void)setEnvironmentValue:(id)arg1 forKey:(NSString *)arg2;
- (WFContentCollection *)workflowInput;
- (NSDate *)workflowStartDate;

@end
