
@interface ManagedRepresentation : NSManagedObject

@property (nonatomic) int byteCount;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) int index;
@property (nonatomic) bool isPreferred;
@property (nonatomic, copy) NSString *role;
@property (nonatomic) double size_h;
@property (nonatomic) double size_w;
@property (nonatomic, retain) ManagedSticker *sticker;
@property (nonatomic, copy) NSString *uti;
@property (nonatomic) int version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
