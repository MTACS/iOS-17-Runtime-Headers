
@protocol INAppendToNoteIntentExport <NSObject, JSExport>

@required

- (INNoteContent *)content;
- (id)init;
- (void)setContent:(INNoteContent *)arg1;
- (void)setTargetNote:(INNote *)arg1;
- (INNote *)targetNote;

@end
