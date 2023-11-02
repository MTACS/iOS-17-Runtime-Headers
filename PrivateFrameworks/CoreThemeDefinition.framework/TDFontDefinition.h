
@interface TDFontDefinition : NSManagedObject

@property (nonatomic, retain) NSNumber *baselineOffset;
@property (nonatomic, retain) NSDate *dateOfLastChange;
@property (nonatomic, retain) NSString *postscriptName;
@property (nonatomic, retain) TDMetafontSelector *selector;

@end
