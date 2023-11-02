
@interface DOCTagPickerPanelAppearance : NSObject <DOCTagContainerAppearanceProviding> {
    double  _bottomMargin;
    double  _maxHeight;
    double  _topMargin;
}

@property (nonatomic, readonly) double bottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxHeight;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topMargin;

- (double)bottomMargin;
- (id)initWithTopMargin:(double)arg1 bottomMargin:(double)arg2 maxHeight:(double)arg3;
- (double)maxHeight;
- (double)topMargin;

@end
