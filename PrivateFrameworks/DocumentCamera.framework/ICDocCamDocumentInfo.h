
@interface ICDocCamDocumentInfo : NSObject <NSSecureCoding> {
    NSString * _croppedAndFilteredImageUUID;
    NSString * _croppedButNotFilteredImageUUID;
    short  _currentFilter;
    long long  _currentOrientation;
    <ICDocCamViewControllerDelegate> * _delegate;
    NSString * _fullImageUUID;
    ICDocCamImageQuad * _imageQuad;
    NSData * _markupModelData;
    NSString * _meshAnimImageUUID;
    NSDictionary * _metaData;
    NSString * _scanDataDelegateIdentifier;
}

@property (nonatomic, retain) NSString *croppedAndFilteredImageUUID;
@property (nonatomic, retain) NSString *croppedButNotFilteredImageUUID;
@property (nonatomic) short currentFilter;
@property (nonatomic) long long currentOrientation;
@property <ICDocCamViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *fullImageUUID;
@property (nonatomic, readonly) bool hasFilter;
@property (nonatomic, retain) ICDocCamImageQuad *imageQuad;
@property (nonatomic, retain) NSData *markupModelData;
@property (nonatomic, retain) NSString *meshAnimImageUUID;
@property (nonatomic, retain) NSDictionary *metaData;
@property (nonatomic, readonly) <DCScanDataDelegate> *scanDataDelegate;
@property (nonatomic, retain) NSString *scanDataDelegateIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allUUIDs;
- (id)croppedAndFilteredImageUUID;
- (id)croppedButNotFilteredImageUUID;
- (short)currentFilter;
- (long long)currentOrientation;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullImageUUID;
- (bool)hasFilter;
- (id)imageQuad;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)markupModelData;
- (id)meshAnimImageUUID;
- (id)metaData;
- (id)scanDataDelegate;
- (id)scanDataDelegateIdentifier;
- (void)setCroppedAndFilteredImageUUID:(id)arg1;
- (void)setCroppedButNotFilteredImageUUID:(id)arg1;
- (void)setCurrentFilter:(short)arg1;
- (void)setCurrentOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullImageUUID:(id)arg1;
- (void)setImageQuad:(id)arg1;
- (void)setMarkupModelData:(id)arg1;
- (void)setMeshAnimImageUUID:(id)arg1;
- (void)setMetaData:(id)arg1;
- (void)setScanDataDelegateIdentifier:(id)arg1;

@end
