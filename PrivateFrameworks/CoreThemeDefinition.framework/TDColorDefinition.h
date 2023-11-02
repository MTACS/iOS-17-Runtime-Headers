
@interface TDColorDefinition : NSManagedObject <TDElementAttributes>

@property (nonatomic, retain) NSManagedObject *colorStatus;
@property (nonatomic, retain) NSDate *dateOfLastChange;
@property (nonatomic, retain) TDColorName *name;
@property (nonatomic, retain) NSNumber *physicalColor;

- (id)colorAsString;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)dataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)setAttributesFromData:(id)arg1;

@end
