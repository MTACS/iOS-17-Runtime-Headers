
@interface CNContactImageUpdater : NSObject {
    CNMutableContact * _contact;
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNMutableContact *contact;
@property (nonatomic, retain) CNContactStore *contactStore;

+ (id)log;

- (void).cxx_destruct;
- (id)contact;
- (id)contactStore;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2;
- (void)setContactStore:(id)arg1;
- (void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2;
- (bool)updateImageWithImageContact:(id)arg1 setAsMe:(bool)arg2;

@end
