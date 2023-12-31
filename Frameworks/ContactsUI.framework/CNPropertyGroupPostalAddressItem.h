
@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNPostalAddress *address;

+ (id)emptyValueForLabel:(id)arg1;

- (bool)_isMinimalAddress:(id)arg1;
- (id)address;
- (id)bestValue:(id)arg1;
- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (bool)isEquivalentToItem:(id)arg1 whenEditing:(bool)arg2;
- (id)normalizedValue;

@end
