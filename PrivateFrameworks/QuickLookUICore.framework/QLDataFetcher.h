
@interface QLDataFetcher : QLItemFetcher {
    NSString * _contentType;
    NSData * _data;
    QLItem * _item;
    NSString * _previewItemTitle;
    NSURL * _temporaryURL;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createTemporaryFileIfNeeded;
- (void)_deleteTempraryFileIfNeeded;
- (id)_temporaryFilename;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchedContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2 previewItemTitle:(id)arg3;
- (id)initWithItem:(id)arg1 contentType:(id)arg2;
- (id)itemSize;
- (void)loadDataIfNeeded;
- (id)newItemProvider;
- (void)prepareShareableItem:(id /* block */)arg1;
- (id)shareableItem;

@end
