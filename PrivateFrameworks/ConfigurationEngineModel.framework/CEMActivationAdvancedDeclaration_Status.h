
@interface CEMActivationAdvancedDeclaration_Status : CEMPayloadBase {
    NSArray * _statusInstalledConfigurations;
}

@property (nonatomic, copy) NSArray *statusInstalledConfigurations;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithInstalledConfigurations:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusInstalledConfigurations:(id)arg1;
- (id)statusInstalledConfigurations;

@end
