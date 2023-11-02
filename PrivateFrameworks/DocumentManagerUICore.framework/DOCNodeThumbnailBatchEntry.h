
@interface DOCNodeThumbnailBatchEntry : NSObject {
    unsigned long long  _fetchOptions;
    DOCNodeThumbnail * _thumbnail;
}

@property (nonatomic) unsigned long long fetchOptions;
@property (nonatomic, retain) DOCNodeThumbnail *thumbnail;

- (void).cxx_destruct;
- (unsigned long long)fetchOptions;
- (void)setFetchOptions:(unsigned long long)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;

@end
