
@interface WFCoreDataShortcutBookmark : NSManagedObject <WFRecordStorage>

@property (nonatomic, retain) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *path;
@property (readonly) Class superclass;

+ (id)fetchRequest;

- (id)descriptor;

@end
