
@interface WFGalleryBanner : NSObject <NSMutableCopying, WFCloudKitItem> {
    CKRecordID * _base;
    CKRecordID * _detailPage;
    CKRecordID * _identifier;
    WFFileRepresentation * _ipad2xImageFile;
    WFFileRepresentation * _iphone2xImageFile;
    WFFileRepresentation * _iphone3xImageFile;
    NSString * _language;
    NSString * _name;
    NSString * _persistentIdentifier;
    NSString * _subtitle;
    NSArray * _supportedIdioms;
}

@property (nonatomic, readonly) CKRecordID *base;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKRecordID *detailPage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, retain) WFFileRepresentation *ipad2xImageFile;
@property (nonatomic, retain) WFFileRepresentation *iphone2xImageFile;
@property (nonatomic, retain) WFFileRepresentation *iphone3xImageFile;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedIdioms;

+ (struct CGSize { double x1; double x2; })pixelSizeForBannerSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })pointSizeForBannerSize:(long long)arg1;
+ (id)properties;
+ (id)propertyForSize:(long long)arg1;
+ (id)recordType;
+ (double)scaleForBannerSize:(long long)arg1;

- (void).cxx_destruct;
- (id)base;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailPage;
- (id)identifier;
- (id)imageFileForSize:(long long)arg1;
- (id)imageForSize:(long long)arg1;
- (id)ipad2xImageFile;
- (id)iphone2xImageFile;
- (id)iphone3xImageFile;
- (id)language;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)persistentIdentifier;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (void)setIpad2xImageFile:(id)arg1;
- (void)setIphone2xImageFile:(id)arg1;
- (void)setIphone3xImageFile:(id)arg1;
- (id)subtitle;
- (id)supportedIdioms;

@end
