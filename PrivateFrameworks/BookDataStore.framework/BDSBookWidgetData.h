
@interface BDSBookWidgetData : NSObject <NSSecureCoding> {
    NSString * _assetID;
    NSString * _coverURL;
    NSString * _libraryAssetType;
    NSString * _pageProgressionDirection;
    NSNumber * _readingProgress;
    NSString * _title;
    NSNumber * _totalDuration;
}

@property (nonatomic, copy) NSString *assetID;
@property (nonatomic, copy) NSString *coverURL;
@property (nonatomic, copy) NSString *libraryAssetType;
@property (nonatomic, copy) NSString *pageProgressionDirection;
@property (nonatomic, copy) NSNumber *readingProgress;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSNumber *totalDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetID;
- (id)coverURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSignificantDifferenceWith:(id)arg1;
- (id)initWithAssetID:(id)arg1 title:(id)arg2 pageProgressionDirection:(id)arg3 coverURL:(id)arg4 readingProgress:(id)arg5 libraryAssetType:(id)arg6;
- (id)initWithAssetID:(id)arg1 title:(id)arg2 pageProgressionDirection:(id)arg3 coverURL:(id)arg4 readingProgress:(id)arg5 totalDuration:(id)arg6 libraryAssetType:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)libraryAssetType;
- (id)pageProgressionDirection;
- (id)readingProgress;
- (void)setAssetID:(id)arg1;
- (void)setCoverURL:(id)arg1;
- (void)setLibraryAssetType:(id)arg1;
- (void)setPageProgressionDirection:(id)arg1;
- (void)setReadingProgress:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTotalDuration:(id)arg1;
- (id)title;
- (id)totalDuration;

@end
