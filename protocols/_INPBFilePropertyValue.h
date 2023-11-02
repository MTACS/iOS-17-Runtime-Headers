
@protocol _INPBFilePropertyValue <NSObject>

@required

- (int)StringAsFileType:(NSString *)arg1;
- (_INPBDateTimeRange *)dateTime;
- (int)fileType;
- (NSString *)fileTypeAsString:(int)arg1;
- (bool)hasDateTime;
- (bool)hasFileType;
- (bool)hasPerson;
- (bool)hasQuantity;
- (bool)hasValue;
- (_INPBContact *)person;
- (_INPBLong *)quantity;
- (void)setDateTime:(_INPBDateTimeRange *)arg1;
- (void)setFileType:(int)arg1;
- (void)setHasFileType:(bool)arg1;
- (void)setPerson:(_INPBContact *)arg1;
- (void)setQuantity:(_INPBLong *)arg1;
- (void)setValue:(_INPBString *)arg1;
- (_INPBString *)value;

@end
