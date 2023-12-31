
@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (nonatomic, copy) NSArray *persons;
@property (nonatomic) bool showImmediately;

+ (id)personPicker;
+ (id)personPickerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)persons;
- (void)setPersons:(id)arg1;
- (void)setShowImmediately:(bool)arg1;
- (bool)showImmediately;

@end
