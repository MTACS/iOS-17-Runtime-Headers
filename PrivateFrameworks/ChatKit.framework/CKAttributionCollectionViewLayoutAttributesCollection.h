
@interface CKAttributionCollectionViewLayoutAttributesCollection : NSObject <NSCopying> {
    NSArray * _avatarAttributesCollection;
    UICollectionViewLayoutAttributes * _containerAttributes;
    UICollectionViewLayoutAttributes * _countViewAttributes;
    UICollectionViewLayoutAttributes * _iconViewAttributes;
    CKAttributionViewModelObject * _modelObject;
    NSArray * _nameAttributesCollection;
}

@property (nonatomic, retain) NSArray *avatarAttributesCollection;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *containerAttributes;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *countViewAttributes;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *iconViewAttributes;
@property (nonatomic, retain) CKAttributionViewModelObject *modelObject;
@property (nonatomic, retain) NSArray *nameAttributesCollection;

- (void).cxx_destruct;
- (void)_setCollapsedAttributes:(id)arg1;
- (void)_setExpandedAttributes:(id)arg1;
- (void)applyAlphaToAllAttributesAlpha:(double)arg1;
- (id)avatarAttributesCollection;
- (id)containerAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countViewAttributes;
- (id)iconViewAttributes;
- (id)initWithModelObject:(id)arg1 section:(long long)arg2;
- (id)modelObject;
- (id)nameAttributesCollection;
- (void)setAvatarAttributesCollection:(id)arg1;
- (void)setContainerAttributes:(id)arg1;
- (void)setContainerAttributes:(id)arg1 layoutMode:(long long)arg2;
- (void)setCountViewAttributes:(id)arg1;
- (void)setIconViewAttributes:(id)arg1;
- (void)setModelObject:(id)arg1;
- (void)setNameAttributesCollection:(id)arg1;

@end
