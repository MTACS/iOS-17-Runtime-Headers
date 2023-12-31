
@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNInstantMessageAddress *imAddress;

+ (id)emptyValueForLabel:(id)arg1;

- (id)defaultActionURL;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (id)editingStringValue;
- (id)imAddress;
- (bool)isEquivalentToItem:(id)arg1;
- (id)valueForDisplayString:(id)arg1;

@end
