
@interface NSCKExportMetadata : NSManagedObject

@property (nonatomic, retain) NSDate *exportedAt;
@property (nonatomic, retain) NSPersistentHistoryToken *historyToken;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSSet *operations;

+ (id)entityPath;

@end
