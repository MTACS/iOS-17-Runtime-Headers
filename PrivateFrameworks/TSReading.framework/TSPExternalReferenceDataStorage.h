
@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {
    NSURL * _URL;
    NSData * _bookmarkData;
    TSPObjectContext * _context;
}

@property (getter=isReadable, nonatomic, readonly) bool readable;

- (void).cxx_destruct;
- (id)bookmarkDataForArchiver:(id)arg1;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isReadable;
- (void)performReadWithAccessor:(id /* block */)arg1;
- (id)storageForDataCopyFromOtherContext;

@end
