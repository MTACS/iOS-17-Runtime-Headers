
@interface DNDSMutableConfigurationSecureRecord : DNDSConfigurationSecureRecord

@property (nonatomic, copy) NSDictionary *allowedApplications;
@property (nonatomic, copy) NSSet *allowedWebApplications;
@property (nonatomic, copy) NSSet *deniedApplications;
@property (nonatomic, copy) NSSet *deniedWebApplications;
@property (nonatomic, copy) DNDSSenderConfigurationRecord *senderConfiguration;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAllowedApplications:(id)arg1;
- (void)setAllowedWebApplications:(id)arg1;
- (void)setDeniedApplications:(id)arg1;
- (void)setDeniedWebApplications:(id)arg1;
- (void)setSenderConfiguration:(id)arg1;

@end
