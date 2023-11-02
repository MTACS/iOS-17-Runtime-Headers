
@interface SMCatalogLockup : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  catalogLockup;
    void mediaTagStringBuilder;
}

@property (nonatomic, readonly) SMArtwork *artwork;
@property (nonatomic, readonly) long long assetLoadStatus;
@property (nonatomic, readonly) long long bundleReason;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSAttributedString *detail;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSNumber *mediaTypeRawValue;
@property (nonatomic, readonly) NSString *recencyTag;
@property (nonatomic, readonly) NSAttributedString *subtitle;
@property (nonatomic, readonly) NSAttributedString *title;

- (void).cxx_destruct;
- (id)artwork;
- (long long)assetLoadStatus;
- (long long)bundleReason;
- (id)description;
- (id)detail;
- (id)identifier;
- (id)init;
- (id)mediaTypeRawValue;
- (id)recencyTag;
- (id)subtitle;
- (id)title;

@end
