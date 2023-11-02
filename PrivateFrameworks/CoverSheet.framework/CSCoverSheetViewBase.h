
@interface CSCoverSheetViewBase : SBFTouchPassThroughView <CSPresentationProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <UICoordinateSpace> *presentationCoordinateSpace;
@property (nonatomic, readonly, copy) NSArray *presentationRegions;
@property (readonly) Class superclass;

- (bool)isCoverSheetView;
- (id)presentationCoordinateSpace;
- (id)presentationRegions;

@end
