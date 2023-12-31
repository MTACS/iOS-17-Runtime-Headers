
@interface SANoteObject : SADomainObject

@property (nonatomic, copy) NSString *contents;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic) bool restricted;
@property (nonatomic, copy) NSString *title;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)contents;
- (id)createdDate;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)lastModifiedDate;
- (bool)restricted;
- (void)setContents:(id)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
