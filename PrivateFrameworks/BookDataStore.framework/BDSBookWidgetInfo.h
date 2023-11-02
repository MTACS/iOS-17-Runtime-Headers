
@interface BDSBookWidgetInfo : NSObject <NSSecureCoding> {
    NSString * _assetID;
    NSString * _cloudAssetType;
    NSString * _coverURL;
    bool  _isExplicit;
    bool  _isTrackedAsRecent;
    NSDate * _lastEngagedDate;
    NSString * _libraryContentAssetType;
    NSString * _pageProgressionDirection;
    NSString * _title;
    NSNumber * _totalDuration;
}

@property (nonatomic, copy) NSString *assetID;
@property (nonatomic, copy) NSString *cloudAssetType;
@property (nonatomic, copy) NSString *coverURL;
@property (nonatomic) bool isExplicit;
@property (nonatomic, readonly) bool isTrackedAsRecent;
@property (nonatomic, readonly) NSDate *lastEngagedDate;
@property (nonatomic, copy) NSString *libraryContentAssetType;
@property (nonatomic, copy) NSString *pageProgressionDirection;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSNumber *totalDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetID;
- (id)cloudAssetType;
- (id)coverURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetID:(id)arg1;
- (id)initWithAssetID:(id)arg1 title:(id)arg2 coverURL:(id)arg3 pageProgressionDirection:(id)arg4 cloudAssetType:(id)arg5 libraryContentAssetType:(id)arg6;
- (id)initWithAssetID:(id)arg1 title:(id)arg2 coverURL:(id)arg3 pageProgressionDirection:(id)arg4 cloudAssetType:(id)arg5 libraryContentAssetType:(id)arg6 lastEngagedDate:(id)arg7 isTrackedAsRecent:(bool)arg8;
- (id)initWithCoder:(id)arg1;
- (id)insertMatchingManagedObjectIntoContext:(id)arg1;
- (bool)isExplicit;
- (bool)isTrackedAsRecent;
- (id)lastEngagedDate;
- (id)libraryContentAssetType;
- (id)pageProgressionDirection;
- (void)setAssetID:(id)arg1;
- (void)setCloudAssetType:(id)arg1;
- (void)setCoverURL:(id)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setLibraryContentAssetType:(id)arg1;
- (void)setPageProgressionDirection:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTotalDuration:(id)arg1;
- (id)title;
- (id)totalDuration;

@end
