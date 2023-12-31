
@interface SADIAGSetLatencyDiagnosticConfiguration : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *diagnosticActions;

+ (id)setLatencyDiagnosticConfiguration;
+ (id)setLatencyDiagnosticConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (id)diagnosticActions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDiagnosticActions:(id)arg1;

@end
