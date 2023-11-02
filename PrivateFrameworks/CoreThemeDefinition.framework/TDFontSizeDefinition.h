
@interface TDFontSizeDefinition : NSManagedObject

@property (nonatomic, retain) NSDate *dateOfLastChange;
@property (nonatomic, retain) NSNumber *pointSize;
@property (nonatomic, retain) TDMetafontSizeSelector *selector;

@end
