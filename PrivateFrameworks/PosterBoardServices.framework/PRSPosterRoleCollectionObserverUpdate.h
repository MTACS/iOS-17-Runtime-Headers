
@interface PRSPosterRoleCollectionObserverUpdate : NSObject {
    NSArray * _posterCollection;
    NSString * _role;
}

@property (nonatomic, readonly) NSArray *posterCollection;
@property (nonatomic, readonly) NSString *role;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithRole:(id)arg1 posterCollection:(id)arg2;
- (id)posterCollection;
- (id)role;

@end
