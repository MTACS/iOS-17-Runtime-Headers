
@interface FBSDisplayLayoutPublisherConfiguration : NSObject {
    NSString * _domainIdentifier;
    NSString * _instanceIdentifier;
}

@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic, copy) NSString *instanceIdentifier;

- (void).cxx_destruct;
- (id)domainIdentifier;
- (id)instanceIdentifier;
- (void)setDomainIdentifier:(id)arg1;
- (void)setInstanceIdentifier:(id)arg1;

@end
