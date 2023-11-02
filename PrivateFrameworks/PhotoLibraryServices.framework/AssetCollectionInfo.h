
@interface AssetCollectionInfo : NSObject <NSSecureCoding> {
    NSString * _GUID;
    NSString * _derivativeUTI;
    NSNumber * _height;
    bool  _isDeletable;
    bool  _isMine;
    bool  _isPhotoIris;
    bool  _isVideo;
    NSDictionary * _metaData;
    NSString * _originalFilename;
    NSNumber * _originalFilesize;
    NSString * _personID;
    unsigned short  _playbackVariation;
    NSDate * _timestamp;
    NSNumber * _width;
}

@property (nonatomic, readonly) NSString *GUID;
@property (nonatomic, readonly) NSString *derivativeUTI;
@property (nonatomic, readonly) NSNumber *height;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isMine;
@property (nonatomic, readonly) bool isPhotoIris;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly) NSDictionary *metaData;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) NSNumber *originalFilesize;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) unsigned short playbackVariation;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSNumber *width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)derivativeUTI;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)height;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDeletable;
- (bool)isMine;
- (bool)isPhotoIris;
- (bool)isVideo;
- (id)metaData;
- (id)originalFilename;
- (id)originalFilesize;
- (id)personID;
- (unsigned short)playbackVariation;
- (id)timestamp;
- (id)width;

@end
