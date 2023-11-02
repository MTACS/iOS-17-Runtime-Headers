
@interface PLValidatedExternalResource : NSObject <NSCopying, PLResourceIdentity> {
    NSString * _codecFourCharCode;
    long long  _dataLength;
    NSURL * _fileURL;
    long long  _ptpTrashedState;
    unsigned int  _recipeID;
    unsigned int  _resourceType;
    NSNumber * _sidecarIndex;
    NSDate * _trashedDate;
    short  _trashedState;
    PLUniformTypeIdentifier * _uniformTypeIdentifier;
    long long  _unorientedHeight;
    long long  _unorientedWidth;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *codecFourCharCode;
@property (nonatomic) long long dataLength;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, readonly) bool hasRecipe;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDerivative;
@property (nonatomic, readonly) bool isOriginalResource;
@property (nonatomic) long long ptpTrashedState;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic, retain) NSNumber *sidecarIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *trashedDate;
@property (nonatomic) short trashedState;
@property (nonatomic, retain) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (nonatomic) long long unorientedHeight;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) unsigned int version;

+ (id)resourceWithExternalResource:(id)arg1;

- (void).cxx_destruct;
- (id)codecFourCharCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cplTypeWithAssetID:(id)arg1;
- (long long)dataLength;
- (id)description;
- (id)fileURL;
- (bool)hasRecipe;
- (id)init;
- (bool)isDerivative;
- (bool)isEqualToValidatedExternalResource:(id)arg1;
- (bool)isOriginalResource;
- (bool)isPlayableVideo;
- (void)persistResourceTypeToFileURL;
- (long long)ptpTrashedState;
- (unsigned int)recipeID;
- (unsigned int)resourceType;
- (void)setCodecFourCharCode:(id)arg1;
- (void)setDataLength:(long long)arg1;
- (void)setFileURL:(id)arg1;
- (void)setPtpTrashedState:(long long)arg1;
- (void)setRecipeID:(unsigned int)arg1;
- (void)setResourceType:(unsigned int)arg1;
- (void)setSidecarIndex:(id)arg1;
- (void)setTrashedDate:(id)arg1;
- (void)setTrashedState:(short)arg1;
- (void)setTrashedStateFromURL;
- (void)setUniformTypeIdentifier:(id)arg1;
- (void)setUnorientedHeight:(long long)arg1;
- (void)setUnorientedWidth:(long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)sidecarIndex;
- (id)trashedDate;
- (short)trashedState;
- (id)uniformTypeIdentifier;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (unsigned int)version;

@end
