
@interface WFGalleryCollection : NSObject <NSMutableCopying, WFCloudKitItem, WFSortableGalleryObject> {
    CKRecordID * _base;
    NSString * _collectionDescription;
    CKRecordID * _identifier;
    NSString * _language;
    long long  _minVersion;
    NSDate * _modifiedAt;
    NSString * _name;
    NSString * _persistentIdentifier;
    NSArray * _supportedIdioms;
    NSArray * _workflows;
}

@property (nonatomic, readonly) CKRecordID *base;
@property (nonatomic, readonly) NSString *collectionDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) long long minVersion;
@property (nonatomic, readonly) NSDate *modifiedAt;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedIdioms;
@property (nonatomic, readonly) NSArray *workflows;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)base;
- (id)collectionDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)language;
- (long long)minVersion;
- (id)modifiedAt;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)persistentIdentifier;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (void)setSupportedIdioms:(id)arg1;
- (id)supportedIdioms;
- (id)workflows;

@end
