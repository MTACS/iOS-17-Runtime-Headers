
@interface WFWorkflowAuthorizationConfiguration : NSObject <NSSecureCoding> {
    NSString * _localizedMessage;
    NSString * _localizedPrompt;
}

@property (nonatomic, readonly, copy) NSString *localizedMessage;
@property (nonatomic, readonly, copy) NSString *localizedPrompt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizationDialogRequestWithAttribution:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedMessage;
- (id)localizedPrompt;
- (id)siriDialogAlertWithCompletionHandler:(id /* block */)arg1;

@end
