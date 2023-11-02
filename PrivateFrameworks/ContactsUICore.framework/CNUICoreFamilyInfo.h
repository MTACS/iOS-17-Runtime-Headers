
@interface CNUICoreFamilyInfo : NSObject {
    NSArray * _elements;
    CNContact * _meContact;
}

@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) CNContact *meContact;

- (void).cxx_destruct;
- (id)description;
- (id)elements;
- (id)init;
- (id)initWithMeContact:(id)arg1 elements:(id)arg2;
- (id)meContact;

@end
