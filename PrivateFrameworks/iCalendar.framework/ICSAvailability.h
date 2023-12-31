
@interface ICSAvailability : ICSComponent

@property (retain) ICSDate *created;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) ICSDate *last_modified;
@property (retain) ICSUserAddress *organizer;
@property unsigned long long sequence;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (retain) NSURL *url;

+ (id)name;

@end
