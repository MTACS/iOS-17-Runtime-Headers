
@interface PKSetupAssistantRequirementsCheckResult : NSObject {
    void missingRequirements;
    void shouldRun;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long missingRequirements;
@property (nonatomic, readonly) bool shouldRun;

- (id)description;
- (id)init;
- (unsigned long long)missingRequirements;
- (bool)shouldRun;

@end
