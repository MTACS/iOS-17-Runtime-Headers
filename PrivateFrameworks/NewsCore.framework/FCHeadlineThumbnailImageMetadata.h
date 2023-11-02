
@interface FCHeadlineThumbnailImageMetadata : NSObject {
    unsigned long long  _sizeBuffer;
    FCHeadlineThumbnail * _thumbnail;
    NSURL * _url;
}

@property (nonatomic) unsigned long long sizeBuffer;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnail;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 size:(unsigned long long)arg2 assetHandle:(id)arg3;
- (void)setSizeBuffer:(unsigned long long)arg1;
- (unsigned long long)sizeBuffer;
- (id)thumbnail;
- (id)url;

@end
