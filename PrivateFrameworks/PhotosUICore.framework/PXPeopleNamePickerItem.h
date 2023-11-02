
@interface PXPeopleNamePickerItem : NSObject {
    CNContact * _contact;
    PHPerson * _person;
    NSAttributedString * _subtitle;
    NSAttributedString * _title;
}

@property (readonly) CNContact *contact;
@property (readonly) PHPerson *person;
@property (readonly) NSAttributedString *subtitle;
@property (readonly) NSAttributedString *title;

- (void).cxx_destruct;
- (id)contact;
- (id)initWithContact:(id)arg1 searchPrefix:(id)arg2;
- (id)initWithPerson:(id)arg1 searchPrefix:(id)arg2;
- (id)person;
- (id)subtitle;
- (id)title;

@end
