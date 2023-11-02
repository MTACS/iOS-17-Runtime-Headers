
@interface CNUIFamilyMemberDowntimeContactSection : NSObject {
    NSArray * _contactItems;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *contactItems;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)contactItems;
- (id)initWithContactItems:(id)arg1 title:(id)arg2;
- (id)title;

@end
