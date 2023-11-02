
@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNContactRelation *contactRelation;

+ (id)emptyValueForLabel:(id)arg1;

- (id)contactRelation;
- (id)displayStringForValue:(id)arg1;
- (id)normalizedValue;
- (id)valueForDisplayString:(id)arg1;

@end
