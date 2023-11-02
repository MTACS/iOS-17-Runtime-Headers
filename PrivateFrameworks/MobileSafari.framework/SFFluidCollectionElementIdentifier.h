
@interface SFFluidCollectionElementIdentifier : NSObject <NSCopying> {
    long long  _elementCategory;
    NSString * _elementKind;
    NSIndexPath * _indexPath;
}

@property (nonatomic, readonly) long long elementCategory;
@property (nonatomic, readonly, copy) NSString *elementKind;
@property (nonatomic, readonly) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)elementCategory;
- (id)elementIdentifierWithIndexPath:(id)arg1;
- (id)elementKind;
- (unsigned long long)hash;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 elementCategory:(long long)arg2 elementKind:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
