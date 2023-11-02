
@protocol _INPBRideDriver <NSObject>

@required

- (bool)hasImage;
- (bool)hasPerson;
- (bool)hasPhoneNumber;
- (bool)hasRating;
- (_INPBImageValue *)image;
- (_INPBContactValue *)person;
- (NSString *)phoneNumber;
- (NSString *)rating;
- (void)setImage:(_INPBImageValue *)arg1;
- (void)setPerson:(_INPBContactValue *)arg1;
- (void)setPhoneNumber:(NSString *)arg1;
- (void)setRating:(NSString *)arg1;

@end
