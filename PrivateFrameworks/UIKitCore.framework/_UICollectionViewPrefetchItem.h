
@interface _UICollectionViewPrefetchItem : NSObject {
    UICollectionViewLayoutAttributes * _attributes;
    struct { 
        unsigned int needsLayoutAttributesUpdate : 1; 
        unsigned int needsPreferredAttributesUpdate : 1; 
        unsigned int needsReconfigure : 1; 
    }  _flags;
    UICollectionReusableView * _view;
}

@property (nonatomic, retain) UICollectionReusableView *view;

- (void).cxx_destruct;
- (id)description;
- (void)setView:(id)arg1;
- (id)view;

@end
