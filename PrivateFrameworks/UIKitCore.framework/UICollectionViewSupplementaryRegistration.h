
@interface UICollectionViewSupplementaryRegistration : NSObject {
    UICollectionView * __collectionViewRequestingViewWhenCreated;
    id /* block */  _configurationHandler;
    NSString * _elementKind;
    NSString * _reuseIdentifier;
    Class  _supplementaryClass;
    UINib * _supplementaryNib;
}

@property (nonatomic, readonly) UICollectionView *_collectionViewRequestingViewWhenCreated;
@property (nonatomic, readonly) id /* block */ configurationHandler;
@property (nonatomic, readonly) NSString *elementKind;
@property (nonatomic, readonly) bool hasSupplementaryClass;
@property (nonatomic, readonly) bool hasSupplementaryNib;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, readonly) Class supplementaryClass;
@property (nonatomic, readonly) UINib *supplementaryNib;

+ (id)registrationWithSupplementaryClass:(Class)arg1 elementKind:(id)arg2 configurationHandler:(id /* block */)arg3;
+ (id)registrationWithSupplementaryNib:(id)arg1 elementKind:(id)arg2 configurationHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_collectionViewRequestingViewWhenCreated;
- (id /* block */)configurationHandler;
- (id)elementKind;
- (bool)hasSupplementaryClass;
- (bool)hasSupplementaryNib;
- (id)initWithSupplementaryClass:(Class)arg1 supplementaryNib:(id)arg2 elementKind:(id)arg3 configurationHandler:(id /* block */)arg4 reuseIdentifier:(id)arg5;
- (id)reuseIdentifier;
- (Class)supplementaryClass;
- (id)supplementaryNib;

@end
