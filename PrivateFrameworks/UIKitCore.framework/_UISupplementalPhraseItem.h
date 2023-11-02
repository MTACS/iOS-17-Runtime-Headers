
@interface _UISupplementalPhraseItem : _UISupplementalItem

@property (nonatomic, readonly) NSString *title;

- (unsigned long long)_identifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTISupplementalPhraseItem:(id)arg1;
- (id)initWithTISupplementalPhraseItem:(id)arg1 icon:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;
- (id)title;

@end
