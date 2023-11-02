
@interface ICSFreeBusy : ICSComponent

@property (retain) NSArray *attendee;
@property (retain) ICSDate *created;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (nonatomic, retain) NSArray *freebusy;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (nonatomic, retain) NSString *x_calendarserver_extended_freebusy;
@property (nonatomic, retain) NSString *x_calendarserver_mask_uid;

+ (id)name;

- (id)freebusy;
- (void)setFreebusy:(id)arg1;
- (void)setX_calendarserver_extended_freebusy:(id)arg1;
- (void)setX_calendarserver_mask_uid:(id)arg1;
- (id)x_calendarserver_extended_freebusy;
- (id)x_calendarserver_mask_uid;

@end
