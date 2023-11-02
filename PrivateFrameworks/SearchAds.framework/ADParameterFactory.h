
@interface ADParameterFactory : NSObject {
    ADCapService * _capService;
}

@property (nonatomic, retain) ADCapService *capService;

- (void).cxx_destruct;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)arg1;
- (id)capService;
- (id)frequencyCapDataParameter;
- (id)init;
- (id)privacyDataKeyParameter;
- (id)requestedAdDataParameter;
- (id)requestedTemplateTypeParameter;
- (void)setCapService:(id)arg1;
- (id)toroClickCountDataParameter;

@end
