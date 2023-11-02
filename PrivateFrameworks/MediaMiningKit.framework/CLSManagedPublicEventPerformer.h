
@interface CLSManagedPublicEventPerformer : NSManagedObject

@property (nonatomic, retain) NSString *iTunesIdentifier;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) CLSManagedPublicEvent *publicEvent;

+ (id)entityName;

@end
