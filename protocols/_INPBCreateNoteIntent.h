
@protocol _INPBCreateNoteIntent <NSObject>

@required

- (_INPBNoteContent *)content;
- (_INPBDataString *)groupName;
- (bool)hasContent;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasTitle;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setContent:(_INPBNoteContent *)arg1;
- (void)setGroupName:(_INPBDataString *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTitle:(_INPBDataString *)arg1;
- (_INPBDataString *)title;

@end
