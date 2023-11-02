
@interface NTKCFaceDetailComplicationSectionController : NTKCFaceDetailSectionController {
    <NTKCFaceDetailComplicationSectionDelegate> * _delegate;
    NTKFaceView * _faceView;
    NTKCFaceDetailComplicationsHiddenCell * _hiddenCell;
    NSSet * _richComplicationSlots;
}

@property (nonatomic) <NTKCFaceDetailComplicationSectionDelegate> *delegate;
@property (nonatomic, retain) NTKFaceView *faceView;
@property (nonatomic, retain) NTKCFaceDetailComplicationsHiddenCell *hiddenCell;
@property (nonatomic, retain) NSSet *richComplicationSlots;
@property (nonatomic, retain) NSMutableArray *rows;

+ (bool)hasComplicationsForFace:(id)arg1;

- (void).cxx_destruct;
- (void)_addComplication:(id)arg1;
- (bool)_canSelectRow:(long long)arg1;
- (void)_commonInit;
- (id)delegate;
- (void)didSelectRow:(long long)arg1;
- (void)faceDidChange;
- (id)faceView;
- (id)hiddenCell;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 faceView:(id)arg3 inGallery:(bool)arg4;
- (id)richComplicationSlots;
- (void)setDelegate:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setHiddenCell:(id)arg1;
- (void)setRichComplicationSlots:(id)arg1;
- (id)titleForHeader;

@end
