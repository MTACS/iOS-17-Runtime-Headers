
@interface CNUIFamilyMemberDowntimeContactItem : NSObject {
    CNContact * _contact;
    NSString * _label;
    bool  _selected;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (id)contact;
- (id)initWithContact:(id)arg1 label:(id)arg2;
- (id)label;
- (bool)selected;
- (void)setSelected:(bool)arg1;

@end
