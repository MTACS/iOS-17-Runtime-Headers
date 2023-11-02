
@interface CNCardGroupMembershipGroupItem : CNCardGroupItem {
    CNGroup * _group;
}

@property (nonatomic, retain) CNGroup *group;

- (void).cxx_destruct;
- (id)group;
- (id)initWithGroup:(id)arg1;
- (void)setGroup:(id)arg1;

@end
