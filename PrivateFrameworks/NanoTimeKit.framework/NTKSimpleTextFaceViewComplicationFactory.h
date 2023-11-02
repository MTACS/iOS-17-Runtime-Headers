
@interface NTKSimpleTextFaceViewComplicationFactory : NSObject <NTKFaceViewComplicationFactory> {
    CLKDevice * _device;
    NTKFaceView * _faceView;
    double  _verticalCenterOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double verticalCenterOffset;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceFrame;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)device;
- (id)faceView;
- (id)init;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)setDevice:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setVerticalCenterOffset:(double)arg1;
- (double)verticalCenterOffset;

@end
