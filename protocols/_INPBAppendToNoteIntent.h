
@protocol _INPBAppendToNoteIntent <NSObject>

@required

- (_INPBNoteContent *)content;
- (bool)hasContent;
- (bool)hasIntentMetadata;
- (bool)hasTargetNote;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setContent:(_INPBNoteContent *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTargetNote:(_INPBNote *)arg1;
- (_INPBNote *)targetNote;

@end
