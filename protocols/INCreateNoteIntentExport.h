
@protocol INCreateNoteIntentExport <NSObject, JSExport>

@required

- (INNoteContent *)content;
- (INSpeakableString *)groupName;
- (id)init;
- (void)setContent:(INNoteContent *)arg1;
- (void)setGroupName:(INSpeakableString *)arg1;
- (void)setTitle:(INSpeakableString *)arg1;
- (INSpeakableString *)title;

@end
