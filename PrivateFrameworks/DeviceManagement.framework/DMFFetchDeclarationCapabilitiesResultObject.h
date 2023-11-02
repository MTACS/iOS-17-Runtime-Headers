
@interface DMFFetchDeclarationCapabilitiesResultObject : CATTaskResultObject {
    NSArray * _supportedActivations;
    NSArray * _supportedAssets;
    NSArray * _supportedCommands;
    NSArray * _supportedConfigurations;
    NSArray * _supportedEvents;
    NSArray * _supportedMessages;
    NSArray * _supportedPredicates;
}

@property (nonatomic, copy) NSArray *supportedActivations;
@property (nonatomic, copy) NSArray *supportedAssets;
@property (nonatomic, copy) NSArray *supportedCommands;
@property (nonatomic, copy) NSArray *supportedConfigurations;
@property (nonatomic, copy) NSArray *supportedEvents;
@property (nonatomic, copy) NSArray *supportedMessages;
@property (nonatomic, copy) NSArray *supportedPredicates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSupportedActivations:(id)arg1;
- (void)setSupportedAssets:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setSupportedConfigurations:(id)arg1;
- (void)setSupportedEvents:(id)arg1;
- (void)setSupportedMessages:(id)arg1;
- (void)setSupportedPredicates:(id)arg1;
- (id)supportedActivations;
- (id)supportedAssets;
- (id)supportedCommands;
- (id)supportedConfigurations;
- (id)supportedEvents;
- (id)supportedMessages;
- (id)supportedPredicates;

@end
