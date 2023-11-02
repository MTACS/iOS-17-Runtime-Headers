
@interface VUITVSeriesManagedObject : NSManagedObject

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSString *canonicalID;
@property (nonatomic, retain) NSSet *episodes;
@property (nonatomic, retain) NSSet *imageInfos;
@property (nonatomic, retain) NSSet *seasons;
@property (nonatomic, copy) NSString *title;

@end
