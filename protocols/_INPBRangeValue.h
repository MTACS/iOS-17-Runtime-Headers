
@protocol _INPBRangeValue <NSObject>

@required

- (bool)hasLength;
- (bool)hasLocation;
- (bool)hasValueMetadata;
- (unsigned long long)length;
- (unsigned long long)location;
- (void)setHasLength:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
