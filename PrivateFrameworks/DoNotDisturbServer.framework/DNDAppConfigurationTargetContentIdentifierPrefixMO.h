
@interface DNDAppConfigurationTargetContentIdentifierPrefixMO : DNDPerAppSettingsMO

@property (nonatomic, copy) NSString *targetContentIdentifierPrefix;

+ (id)fetchRequest;

@end
