
@interface MTWorldClock : INObject

@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSDateComponents *currentDate;
@property (nonatomic, copy) NSDateComponents *currentTime;
@property (nonatomic, copy) NSNumber *isDaylightSavingTime;
@property (nonatomic, copy) NSString *timeZoneAbbreviation;
@property (nonatomic, copy) NSString *timeZoneDisplayName;
@property (nonatomic, copy) NSString *timeZoneName;
@property (nonatomic, copy) NSNumber *timeZoneOffset;
@property (nonatomic, copy) NSNumber *timeZoneOffsetFromGMT;

@end
