
@interface ICDocCamDocumentInfoCollection : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    NSMutableArray * _docInfos;
    NSDate * _modificationDate;
    NSString * _title;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) long long docCamPDFVersion;
@property (nonatomic, retain) NSMutableArray *docInfos;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (id)infoCollectionFromArchiveSidecarItems:(id)arg1 imageCache:(id)arg2;
+ (void)infoCollectionFromImageSidecarItems:(id)arg1 imageCache:(id)arg2 completion:(id /* block */)arg3;
+ (void)infoCollectionFromSidecarItems:(id)arg1 imageCache:(id)arg2 completion:(id /* block */)arg3;
+ (id)infoCollectionWithArchivedDocumentCameraScanData:(id)arg1 imageCache:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)bumpModificationDate;
- (id)creationDate;
- (long long)docCamPDFVersion;
- (id)docInfos;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)modificationDate;
- (void)setCreationDate:(id)arg1;
- (void)setDocInfos:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)title;
- (id)uniqueIdentifier;

@end
