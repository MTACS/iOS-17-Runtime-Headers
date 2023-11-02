
@interface PKAuxiliaryCapabilityUnregisteredRequirements : NSObject {
    NSString * _dpanIdentifier;
    NSArray * _requirementIdentifiers;
}

@property (nonatomic, readonly) NSString *dpanIdentifier;
@property (nonatomic, readonly) NSArray *requirementIdentifiers;

- (void).cxx_destruct;
- (id)dpanIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)requirementIdentifiers;

@end
