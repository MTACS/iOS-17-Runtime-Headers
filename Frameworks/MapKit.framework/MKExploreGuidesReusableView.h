
@interface MKExploreGuidesReusableView : UICollectionReusableView {
    MKExploreGuidesView * _exploreGuidesView;
}

@property (nonatomic, retain) MKExploreGuidesView *exploreGuidesView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)configureWithExploreGuides:(id)arg1 tapHandler:(id /* block */)arg2;
- (id)exploreGuidesView;
- (void)setExploreGuidesView:(id)arg1;

@end
