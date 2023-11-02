
@interface AASetupAssistantSetupDelegatesResponse : AAResponse

@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSDictionary *responseParameters;
@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *statusMessage;

- (id)dsid;
- (id)responseParameters;
- (id)responseParametersForServiceIdentifier:(id)arg1;
- (id)status;
- (id)statusMessage;

@end
