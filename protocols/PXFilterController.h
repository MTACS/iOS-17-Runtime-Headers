
@protocol PXFilterController <NSObject>

@required

- (PXContentFilterState *)contentFilterState;
- (id)initWithDelegate:(id <PXFilterControllerDelegate>)arg1 libraryFilterState:(PXLibraryFilterState *)arg2 initialContentFilterState:(PXContentFilterState *)arg3 isSyndicationLibraryAlbum:(bool)arg4 sharedLibraryStatusProvider:(PXSharedLibraryStatusProvider *)arg5;
- (PXLibraryFilterState *)libraryFilterState;
- (void)setContentFilterState:(PXContentFilterState *)arg1;

@optional

- (void)showFilterUIRelativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(NSObject<PXAnonymousView> *)arg2;

@end
