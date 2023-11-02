
@interface VNDocumentCameraScan : NSObject {
    NSMutableArray * _docInfos;
    NSURL * _scannedDocumentImageDirectoryURL;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *docInfos;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) NSURL *scannedDocumentImageDirectoryURL;
@property (nonatomic, retain) NSString *title;

+ (void)initialize;
+ (id)scannedDocumentsFolderURL;

- (void).cxx_destruct;
- (id)URLForImageInFolder:(id)arg1 withUUID:(id)arg2;
- (id)URLForImageWithUUID:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (id)archivedDataWithError:(id*)arg1;
- (id)copyImageAtURL:(id)arg1;
- (id)copyImageForLoading:(id)arg1 fromFolderURL:(id)arg2;
- (id)copyImageForSaving:(id)arg1 toFolderURL:(id)arg2;
- (bool)copyImagesFromDocInfoCollection:(id)arg1 imageCache:(id)arg2;
- (void)dealloc;
- (void)deleteAllImages;
- (bool)deleteImage:(id)arg1;
- (id)docInfos;
- (id)getImage:(id)arg1;
- (id)getImageURL:(id)arg1;
- (id)imageForScanAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)imageOfPageAtIndex:(unsigned long long)arg1;
- (id)infoCollectionWithImageCache:(id)arg1 error:(id*)arg2;
- (id)initWithArchivedData:(id)arg1 error:(id*)arg2;
- (id)initWithDocInfoCollection:(id)arg1 imageCache:(id)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)makeSureScanDirectoryExists:(id*)arg1;
- (unsigned long long)numberOfScans;
- (id)pListURL:(id)arg1;
- (unsigned long long)pageCount;
- (void)replaceContentsWithDocInfoCollection:(id)arg1 imageCache:(id)arg2;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (id)scannedDocumentImageDirectoryURL;
- (void)setDocInfos:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
