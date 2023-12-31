
@interface PUTileIdentifier : NSObject <NSCopying> {
    NSString * _dataSourceIdentifier;
    unsigned long long  _hash;
    NSIndexPath * _indexPath;
    NSString * _tileKind;
}

@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSString *tileKind;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSourceIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)tileKind;

@end
