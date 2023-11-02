
@interface WFFileRepresentation : WFRepresentation <WFSystemShareableObject> {
    NSDate * _creationDate;
    NSData * _data;
    bool  _deletesFileOnDeallocation;
    NSURL * _fileURL;
    NSString * _filename;
    bool  _isTemporaryFile;
    NSDate * _modificationDate;
    NSURL * _originalURL;
    bool  _securityScopedResource;
    NSString * _wfName;
    WFFileType * _wfType;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletesFileOnDeallocation;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, retain) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTemporaryFile;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSURL *originalURL;
@property (nonatomic, readonly) long long representationType;
@property (nonatomic, readonly) bool securityScopedResource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *wfName;
@property (nonatomic, readonly) WFFileType *wfType;

+ (void)addDisallowedDirectory:(id)arg1;
+ (bool)coordinateFileOperation:(unsigned long long)arg1 shouldCoordinate:(bool)arg2 fileURL:(id)arg3 destinationURL:(id)arg4 accessor:(id /* block */)arg5;
+ (id)disallowedDirectoryURLs;
+ (bool)fileIsInDisallowedDirectory:(id)arg1;
+ (id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3;
+ (id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5;
+ (bool)isAllowedToRepresentFileURL:(id)arg1;
+ (id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2;
+ (id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2 unsanitizedName:(id*)arg3;
+ (bool)sandboxAllowsRepresentingFileURL:(id)arg1;
+ (id)sanitizedFilename:(id)arg1 withExtension:(id)arg2;
+ (id)sanitizedFilename:(id)arg1 withExtension:(id)arg2 unsanitizedName:(id*)arg3;
+ (bool)supportsSecureCoding;
+ (id)typeOfData:(id)arg1;
+ (id)typeOfFile:(id)arg1;

- (void).cxx_destruct;
- (bool)atomicReplaceAcrossVolumesIfNeededWithURLForReplacing:(id)arg1 sourceURL:(id)arg2 error:(id*)arg3;
- (id)copyWithName:(id)arg1 addingExtensionIfNecessary:(bool)arg2 zone:(struct _NSZone { }*)arg3;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)creationDate;
- (id)data;
- (void)dealloc;
- (bool)deletesFileOnDeallocation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fileSize;
- (id)fileURL;
- (id)filename;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4;
- (id)initWithFileURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5;
- (id)inputStream;
- (bool)isEncodable;
- (bool)isTemporaryFile;
- (id)mappedData;
- (id)mappedDataWithError:(id*)arg1;
- (id)modificationDate;
- (id)originalURL;
- (long long)representationType;
- (bool)securityScopedResource;
- (void)setFilename:(id)arg1;
- (id)typeForUserEnteredName:(id)arg1 addingExtensionIfNecessary:(bool)arg2;
- (id)updatedFilenameForUserEnteredName:(id)arg1 addingExtensionIfNecessary:(bool)arg2;
- (id)wfName;
- (id)wfType;
- (bool)writeToFileURL:(id)arg1 copy:(bool)arg2 overwrite:(bool)arg3 error:(id*)arg4;
- (bool)writeToFileURL:(id)arg1 overwriting:(bool)arg2 error:(id*)arg3;
- (bool)writeToTemporaryFileURL:(id)arg1 error:(id*)arg2;

@end
