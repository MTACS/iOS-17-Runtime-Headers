
@protocol _INPBSeat <NSObject>

@required

- (bool)hasSeatNumber;
- (bool)hasSeatRow;
- (bool)hasSeatSection;
- (bool)hasSeatingType;
- (NSString *)seatNumber;
- (NSString *)seatRow;
- (NSString *)seatSection;
- (NSString *)seatingType;
- (void)setSeatNumber:(NSString *)arg1;
- (void)setSeatRow:(NSString *)arg1;
- (void)setSeatSection:(NSString *)arg1;
- (void)setSeatingType:(NSString *)arg1;

@end
