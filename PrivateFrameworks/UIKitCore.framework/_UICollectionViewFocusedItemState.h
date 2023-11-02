
@interface _UICollectionViewFocusedItemState : NSObject <NSCopying> {
    NSString * _elementKind;
    NSIndexPath * _indexPath;
    UICollectionReusableView * _reusableView;
    unsigned long long  _viewType;
}

+ (id)stateWithReusableView:(id)arg1 indexPath:(id)arg2 elementKind:(id)arg3 viewType:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithReusableView:(id)arg1 indexPath:(id)arg2 elementKind:(id)arg3 viewType:(unsigned long long)arg4;

@end
