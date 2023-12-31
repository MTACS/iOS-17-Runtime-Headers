
@interface TDMultisizeImageSetSizeIndex : NSManagedObject

@property (nonatomic) int height;
@property (nonatomic, retain) NSSet *imageRenditions;
@property (nonatomic) short index;
@property (nonatomic, retain) TDMultisizeImageSetProduction *multisizeImageSetProduction;
@property (nonatomic, retain) NSSet *multisizeImageSetRenditions;
@property (nonatomic) int width;

@end
