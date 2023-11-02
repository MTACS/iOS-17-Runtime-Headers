
@interface PXStoryTVInfoPanelViewConfiguration : NSObject <PXGViewUserData> {
    PXStoryViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
