
@interface PXCMMMomentsParticipant : PXRecipient {
    NSString * _additionalLocalizedName;
    PHPerson * _person;
}

@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 localizedName:(id)arg3;
- (id)initWithPerson:(id)arg1;
- (id)localizedName;
- (id)person;

@end
