
@interface CACContactDisambiguationItem : CACDisambiguationItem {
    CNContact * _contact;
    CNLabeledValue * _contactLabeledValue;
}

@property (nonatomic, retain) CNContact *contact;
@property (readonly) NSString *contactDisplayLabel;
@property (readonly) NSString *contactDisplayValue;
@property (nonatomic, retain) CNLabeledValue *contactLabeledValue;

- (void).cxx_destruct;
- (id)contact;
- (id)contactDisplayLabel;
- (id)contactDisplayValue;
- (id)contactLabeledValue;
- (id)displayDescription;
- (id)displayName;
- (id)initWithContact:(id)arg1 labeledValue:(id)arg2 type:(long long)arg3;
- (void)setContact:(id)arg1;
- (void)setContactLabeledValue:(id)arg1;
- (void)startInteraction;

@end
