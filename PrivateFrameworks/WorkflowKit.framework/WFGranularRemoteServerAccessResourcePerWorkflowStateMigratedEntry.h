
@interface WFGranularRemoteServerAccessResourcePerWorkflowStateMigratedEntry : NSObject <NSSecureCoding> {
    NSNumber * authorized;
    NSString * host;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
