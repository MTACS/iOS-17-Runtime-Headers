
@interface TDColorName : NSManagedObject

@property (nonatomic, retain) NSSet *colorDefinitions;
@property (nonatomic, retain) NSString *colorDescription;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *illustrationURL;
@property (nonatomic, retain) NSNumber *isExcludedFromFilter;
@property (nonatomic, retain) NSString *selector;

@end
