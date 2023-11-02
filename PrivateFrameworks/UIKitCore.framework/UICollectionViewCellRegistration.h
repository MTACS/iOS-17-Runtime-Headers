
@interface UICollectionViewCellRegistration : NSObject {
    UICollectionView * __collectionViewRequestingViewWhenCreated;
    Class  _cellClass;
    UINib * _cellNib;
    id /* block */  _configurationHandler;
    NSString * _reuseIdentifier;
}

@property (nonatomic, readonly) UICollectionView *_collectionViewRequestingViewWhenCreated;
@property (nonatomic, readonly) Class cellClass;
@property (nonatomic, readonly) UINib *cellNib;
@property (nonatomic, readonly) id /* block */ configurationHandler;
@property (nonatomic, readonly) bool hasCellClass;
@property (nonatomic, readonly) bool hasCellNib;
@property (nonatomic, readonly) NSString *reuseIdentifier;

+ (id)registrationWithCellClass:(Class)arg1 configurationHandler:(id /* block */)arg2;
+ (id)registrationWithCellNib:(id)arg1 configurationHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_collectionViewRequestingViewWhenCreated;
- (Class)cellClass;
- (id)cellNib;
- (id /* block */)configurationHandler;
- (bool)hasCellClass;
- (bool)hasCellNib;
- (id)initWithCellClass:(Class)arg1 cellNib:(id)arg2 configurationHandler:(id /* block */)arg3 reuseIdentifier:(id)arg4;
- (id)reuseIdentifier;

@end
