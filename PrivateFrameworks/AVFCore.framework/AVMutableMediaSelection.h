
@interface AVMutableMediaSelection : AVMediaSelection

- (bool)_isValidMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (id)_validatedGroupIdentifierKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;

@end
