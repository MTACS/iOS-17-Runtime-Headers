
@interface PRManagedLikeness : NSManagedObject

@property (nonatomic, retain) NSNumber *cropRectHeight;
@property (nonatomic, retain) NSNumber *cropRectWidth;
@property (nonatomic, retain) NSNumber *cropRectX;
@property (nonatomic, retain) NSNumber *cropRectY;
@property (nonatomic, retain) NSDate *dateAdded;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSDate *expiration;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, retain) NSString *ownerID;
@property (nonatomic, retain) NSString *recipe;
@property (nonatomic, retain) NSString *scope;
@property (nonatomic, retain) NSDate *softExpiration;
@property (nonatomic, retain) NSNumber *source;
@property (nonatomic, retain) NSString *staticRepresentationFileID;
@property (nonatomic, retain) NSNumber *type;
@property (nonatomic, retain) NSString *uniqueID;
@property (nonatomic, retain) NSNumber *version;

@end
