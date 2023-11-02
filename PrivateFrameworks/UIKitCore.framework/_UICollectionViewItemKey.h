
@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSString * _identifier;
    NSIndexPath * _indexPath;
    bool  _isClone;
    unsigned long long  _type;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
