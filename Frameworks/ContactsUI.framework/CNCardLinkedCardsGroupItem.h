
@interface CNCardLinkedCardsGroupItem : CNCardGroupItem {
    CNContact * _contact;
}

@property (nonatomic, retain) CNContact *contact;

- (void).cxx_destruct;
- (id)contact;
- (id)initWithContact:(id)arg1;
- (void)setContact:(id)arg1;

@end
