
@protocol NTKCFaceDetailComplicationSectionDelegate <NSObject>

@required

- (NSArray *)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 allowedComplicationsForSlot:(NSString *)arg2;
- (void)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 didChangeToComplication:(NTKComplication *)arg2 forSlot:(NSString *)arg3;
- (void)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 wantsToPresentPickerForSlot:(NSString *)arg2 selectedComplication:(NTKComplication *)arg3;

@end
