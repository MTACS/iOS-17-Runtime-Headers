
@interface HMXPCMessageTransportConfiguration : NSObject <HMFObject, NSCopying, NSMutableCopying> {
    NSString * _machServiceName;
    unsigned long long  _requiredEntitlements;
    bool  _requiresHomeDataAccess;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *machServiceName;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property unsigned long long requiredEntitlements;
@property bool requiresHomeDataAccess;
@property (readonly, copy) NSString *serverStartNotification;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMachServiceName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)machServiceName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (unsigned long long)requiredEntitlements;
- (bool)requiresHomeDataAccess;
- (id)serverStartNotification;
- (void)setRequiredEntitlements:(unsigned long long)arg1;
- (void)setRequiresHomeDataAccess:(bool)arg1;
- (id)shortDescription;

@end
