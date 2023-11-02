
@interface SAPhoneCallConfirmationSnippet : SAUISnippet

@property (nonatomic, copy) NSString *confirmationDisplayText;
@property (nonatomic, copy) NSArray *persons;

- (id)confirmationDisplayText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)persons;
- (void)setConfirmationDisplayText:(id)arg1;
- (void)setPersons:(id)arg1;

@end
