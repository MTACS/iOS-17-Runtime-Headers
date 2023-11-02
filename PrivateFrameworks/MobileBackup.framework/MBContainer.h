
@interface MBContainer : NSObject <NSCopying> {
    NSMutableDictionary * _plist;
    NSString * _volumeMountPoint;
}

@property (nonatomic, retain) NSString *containerDir;
@property (nonatomic, readonly) int containerType;
@property (nonatomic, readonly) NSString *containerTypeString;
@property (nonatomic, retain) NSDate *datePlacedInSafeHarbor;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isSystemContainer;
@property (nonatomic, readonly) bool isSystemSharedContainer;
@property (getter=isSafeHarbor, nonatomic, readonly) bool safeHarbor;
@property (nonatomic, readonly) NSString *safeHarborDir;
@property (nonatomic, readonly) NSString *volumeMountPoint;

+ (id)containerWithPropertyList:(id)arg1 volumeMountPoint:(id)arg2;
+ (id)uninstalledContainerWithDomainName:(id)arg1 volumeMountPoint:(id)arg2;

- (void).cxx_destruct;
- (id)containerDir;
- (int)containerType;
- (id)containerTypeString;
- (id)copyWithVolumeMountPoint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datePlacedInSafeHarbor;
- (id)domain;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPropertyList:(id)arg1 volumeMountPoint:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSafeHarbor;
- (bool)isSystemContainer;
- (bool)isSystemSharedContainer;
- (id)propertyListForBackupProperties;
- (id)propertyListForSafeHarborInfo;
- (id)safeHarborDir;
- (void)setContainerDir:(id)arg1;
- (void)setDatePlacedInSafeHarbor:(id)arg1;
- (id)volumeMountPoint;

@end
