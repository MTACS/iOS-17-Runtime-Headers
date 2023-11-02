
@protocol _INPBShareFocusStatusIntent <NSObject>

@required

- (_INPBFocusStatus *)focusStatus;
- (bool)hasFocusStatus;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setFocusStatus:(_INPBFocusStatus *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
