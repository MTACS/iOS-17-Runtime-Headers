
@interface _UICollectionLayoutEnvironment : NSObject <NSCollectionLayoutEnvironment_Private> {
    <_UIDataSourceSnapshotTranslating> * __dataSourceSnapshot;
    long long  __sectionIndex;
    bool  __wantsCollapsedTopSpacing;
    <NSCollectionLayoutContainer> * _container;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, retain) <_UIDataSourceSnapshotTranslating> *_dataSourceSnapshot;
@property (nonatomic) long long _sectionIndex;
@property (nonatomic) bool _wantsCollapsedTopSpacing;
@property (nonatomic, retain) <NSCollectionLayoutContainer> *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)_dataSourceSnapshot;
- (long long)_sectionIndex;
- (bool)_wantsCollapsedTopSpacing;
- (id)container;
- (id)initWithContainer:(id)arg1 traitCollection:(id)arg2 dataSourceSnapshot:(id)arg3;
- (id)initWithContainer:(id)arg1 traitCollection:(id)arg2 dataSourceSnapshot:(id)arg3 sectionIndex:(long long)arg4 wantsCollapsedTopSpacing:(bool)arg5;
- (void)setContainer:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)set_dataSourceSnapshot:(id)arg1;
- (void)set_sectionIndex:(long long)arg1;
- (void)set_wantsCollapsedTopSpacing:(bool)arg1;
- (id)traitCollection;

@end
