
@protocol _INPBNoteContent <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (bool)hasImage;
- (bool)hasText;
- (bool)hasType;
- (_INPBImageNoteContent *)image;
- (void)setHasType:(bool)arg1;
- (void)setImage:(_INPBImageNoteContent *)arg1;
- (void)setText:(_INPBTextNoteContent *)arg1;
- (void)setType:(int)arg1;
- (_INPBTextNoteContent *)text;
- (int)type;
- (NSString *)typeAsString:(int)arg1;

@end
