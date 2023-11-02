
@interface SASBoardServicesConfiguration : NSObject {
    NSString * _machServiceIdentifier;
    NSString * _presentationDomain;
    NSString * _presentationIdentifier;
    NSString * _signalDomain;
    NSString * _signalIdentifier;
}

@property (nonatomic, retain) NSString *machServiceIdentifier;
@property (nonatomic, retain) NSString *presentationDomain;
@property (nonatomic, retain) NSString *presentationIdentifier;
@property (nonatomic, retain) NSString *signalDomain;
@property (nonatomic, retain) NSString *signalIdentifier;

+ (id)configuration;
+ (id)new;

- (void).cxx_destruct;
- (id)_init;
- (id)domainForService:(long long)arg1;
- (id)identifierForService:(long long)arg1;
- (id)init;
- (id)machServiceIdentifier;
- (id)presentationDomain;
- (id)presentationIdentifier;
- (void)setMachServiceIdentifier:(id)arg1;
- (void)setPresentationDomain:(id)arg1;
- (void)setPresentationIdentifier:(id)arg1;
- (void)setSignalDomain:(id)arg1;
- (void)setSignalIdentifier:(id)arg1;
- (id)signalDomain;
- (id)signalIdentifier;

@end
