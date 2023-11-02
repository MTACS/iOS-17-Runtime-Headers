
@interface PKProvisioningRequirementsContainer : NSObject <NSSecureCoding> {
    id  _container;
}

@property (nonatomic, retain) id container;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)container;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)requirementsByRemovingRequirements:(id)arg1;
- (void)setContainer:(id)arg1;

@end
