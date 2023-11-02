
@protocol _INPBGetVisualCodeIntent <NSObject>

@required

- (int)StringAsVisualCodeType:(NSString *)arg1;
- (bool)hasIntentMetadata;
- (bool)hasVisualCodeType;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setHasVisualCodeType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setVisualCodeType:(int)arg1;
- (int)visualCodeType;
- (NSString *)visualCodeTypeAsString:(int)arg1;

@end
