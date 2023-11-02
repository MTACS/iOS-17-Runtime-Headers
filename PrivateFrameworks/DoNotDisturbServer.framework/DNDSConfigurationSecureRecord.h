
@interface DNDSConfigurationSecureRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSDictionary * _allowedApplications;
    NSSet * _allowedWebApplications;
    NSSet * _deniedApplications;
    NSSet * _deniedWebApplications;
    DNDSSenderConfigurationRecord * _senderConfiguration;
}

@property (nonatomic, readonly, copy) NSDictionary *allowedApplications;
@property (nonatomic, readonly, copy) NSSet *allowedWebApplications;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSSet *deniedApplications;
@property (nonatomic, readonly, copy) NSSet *deniedWebApplications;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) DNDSSenderConfigurationRecord *senderConfiguration;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithRecord:(id)arg1;
- (id)_initWithSenderConfiguration:(id)arg1 allowedApplications:(id)arg2 deniedApplications:(id)arg3 allowedWebApplications:(id)arg4 deniedWebApplications:(id)arg5;
- (id)allowedApplications;
- (id)allowedWebApplications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deniedApplications;
- (id)deniedWebApplications;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)log:(id)arg1 withPrefix:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)senderConfiguration;

@end
