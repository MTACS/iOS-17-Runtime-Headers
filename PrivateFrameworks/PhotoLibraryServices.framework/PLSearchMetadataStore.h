
@interface PLSearchMetadataStore : NSObject {
    NSString * _storePath;
}

- (void).cxx_destruct;
- (id)currentSearchMetadata;
- (void)deleteStore;
- (id)initWithPath:(id)arg1;
- (void)updateSearchMetadataTo:(id)arg1;

@end
