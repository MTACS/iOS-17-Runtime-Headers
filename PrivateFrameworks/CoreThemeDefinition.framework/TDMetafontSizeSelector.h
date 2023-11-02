
@interface TDMetafontSizeSelector : NSManagedObject

@property (nonatomic, retain) TDThemeSize *controlSize;
@property (nonatomic, retain) TDFontSizeDefinition *definition;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, retain) NSString *selectorName;

@end
