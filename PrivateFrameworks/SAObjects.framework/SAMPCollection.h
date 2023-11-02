
@interface SAMPCollection : SAMPMediaEntity

@property (nonatomic) bool editable;
@property (nonatomic, copy) NSArray *items;

+ (id)collection;
+ (id)collectionWithDictionary:(id)arg1 context:(id)arg2;

- (bool)editable;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)items;
- (void)setEditable:(bool)arg1;
- (void)setItems:(id)arg1;

@end
