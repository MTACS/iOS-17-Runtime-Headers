
@interface PRManagedLikenessChange : NSManagedObject

@property (nonatomic, retain) NSString *changedID;
@property (nonatomic, retain) NSString *changedProperties;
@property (nonatomic, retain) NSNumber *changedVersion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *type;

@end
