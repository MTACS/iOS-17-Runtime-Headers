
@interface _CNContactVCardNameSummzarizationScope : NSObject {
    CNContact * _contact;
    NSString * _fullName;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *fullName;

- (void).cxx_destruct;
- (id)contact;
- (id)fullName;
- (id)initWithContact:(id)arg1 fullName:(id)arg2;

@end
