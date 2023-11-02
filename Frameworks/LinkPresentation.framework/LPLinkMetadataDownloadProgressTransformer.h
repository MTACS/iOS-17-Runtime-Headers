
@interface LPLinkMetadataDownloadProgressTransformer : NSObject {
    unsigned long long  _bytesLoaded;
    LPLinkMetadata * _metadata;
}

@property (nonatomic) unsigned long long bytesLoaded;
@property (nonatomic, retain) LPLinkMetadata *metadata;

- (void).cxx_destruct;
- (unsigned long long)bytesLoaded;
- (id)downloadProgressForTransformer:(id)arg1;
- (id)initWithBytesLoaded:(unsigned long long)arg1 downloadState:(long long)arg2 metadata:(id)arg3;
- (id)metadata;
- (void)setBytesLoaded:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;

@end
