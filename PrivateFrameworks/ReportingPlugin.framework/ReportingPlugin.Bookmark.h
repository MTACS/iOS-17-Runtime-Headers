
@interface ReportingPlugin.Bookmark : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *streamName;
@property (nonatomic, retain) _TtC15ReportingPlugin12StreamReader *streamReader;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
