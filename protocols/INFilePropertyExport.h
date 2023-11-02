
@protocol INFilePropertyExport <NSObject, JSExport>

@required

- (INDateComponentsRange *)dateComponentsRange;
- (id)init;
- (NSString *)name;
- (INPerson *)person;
- (NSString *)qualifier;
- (NSNumber *)quantity;
- (void)setDateComponentsRange:(INDateComponentsRange *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setPerson:(INPerson *)arg1;
- (void)setQualifier:(NSString *)arg1;
- (void)setQuantity:(NSNumber *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setValue:(NSString *)arg1;
- (NSString *)type;
- (NSString *)value;

@end
