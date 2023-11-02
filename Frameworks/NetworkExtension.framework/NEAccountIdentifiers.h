
@interface NEAccountIdentifiers : NSObject {
    NSArray * _calendarAccountIdentifiers;
    NSArray * _contactsAccountIdentifiers;
    NSArray * _mailAccountIdentifiers;
}

@property (copy) NSArray *calendarAccountIdentifiers;
@property (copy) NSArray *contactsAccountIdentifiers;
@property (copy) NSArray *mailAccountIdentifiers;

- (void).cxx_destruct;
- (id)calendarAccountIdentifiers;
- (id)contactsAccountIdentifiers;
- (id)mailAccountIdentifiers;
- (void)setCalendarAccountIdentifiers:(id)arg1;
- (void)setContactsAccountIdentifiers:(id)arg1;
- (void)setMailAccountIdentifiers:(id)arg1;

@end
