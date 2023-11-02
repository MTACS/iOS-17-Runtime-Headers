
@interface QLExternallyCachedThumbnailData : NSObject <PQLResultSetInitializer> {
    NSString * _fileExtension;
    NSString * _itemIdentifier;
    unsigned long long  _size;
    NSData * _versionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fileExtension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *versionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)fileExtension;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (unsigned long long)size;
- (id)versionIdentifier;

@end
