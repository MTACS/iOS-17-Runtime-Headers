
@interface PHImportAssetThumbnailDataRequest : PHImportAssetDataRequest {
    id /* block */  _completionHandler;
    unsigned long long  _longestSide;
    unsigned char  _priority;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) unsigned long long longestSide;
@property (nonatomic, readonly) unsigned char priority;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (id)initWithAsset:(id)arg1 longestSide:(unsigned long long)arg2 priority:(unsigned char)arg3;
- (unsigned long long)longestSide;
- (unsigned char)priority;
- (id)requestAsset;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
