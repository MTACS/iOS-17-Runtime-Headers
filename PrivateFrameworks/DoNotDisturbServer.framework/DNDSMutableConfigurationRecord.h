
@interface DNDSMutableConfigurationRecord : DNDSConfigurationRecord

@property (nonatomic, copy) NSNumber *applicationConfigurationType;
@property (nonatomic, copy) NSNumber *compatibilityVersion;
@property (nonatomic, copy) NSNumber *hideApplicationBadges;
@property (nonatomic, copy) NSNumber *minimumBreakthroughUrgency;
@property (nonatomic, copy) NSNumber *senderConfigurationType;
@property (nonatomic, copy) NSNumber *suppressionMode;
@property (nonatomic, copy) NSNumber *suppressionType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setApplicationConfigurationType:(id)arg1;
- (void)setCompatibilityVersion:(id)arg1;
- (void)setHideApplicationBadges:(id)arg1;
- (void)setMinimumBreakthroughUrgency:(id)arg1;
- (void)setSenderConfigurationType:(id)arg1;
- (void)setSuppressionMode:(id)arg1;
- (void)setSuppressionType:(id)arg1;

@end
