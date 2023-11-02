
@interface WFGalleryPage : NSObject <NSMutableCopying, WFCloudKitItem> {
    NSArray * _banners;
    CKRecordID * _base;
    NSArray * _collections;
    NSArray * _donations;
    NSArray * _donationsGroupedByApp;
    CKRecordID * _identifier;
    NSNumber * _isRoot;
    NSString * _language;
    NSNumber * _minVersion;
    NSString * _name;
    NSString * _persistentIdentifier;
    NSArray * _routines;
}

@property (nonatomic, readonly) NSArray *banners;
@property (nonatomic, readonly) CKRecordID *base;
@property (nonatomic, readonly) NSArray *collections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *donations;
@property (nonatomic, readonly) NSArray *donationsGroupedByApp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, readonly) NSNumber *isRoot;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSNumber *minVersion;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (nonatomic, readonly) NSArray *routines;
@property (readonly) Class superclass;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)banners;
- (id)base;
- (id)collections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)donations;
- (id)donationsGroupedByApp;
- (id)identifier;
- (id)isRoot;
- (id)language;
- (id)minVersion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)persistentIdentifier;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (id)routines;
- (id)subPageMatchingName:(id)arg1;
- (id)subPageWithIdentifier:(id)arg1;

@end
