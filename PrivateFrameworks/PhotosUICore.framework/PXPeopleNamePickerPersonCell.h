
@interface PXPeopleNamePickerPersonCell : PXPeopleNamePickerCell {
    PXPeopleScalableAvatarView * _personAvatarView;
}

@property (nonatomic) PHPerson *person;
@property (nonatomic, readonly) PXPeopleScalableAvatarView *personAvatarView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)person;
- (id)personAvatarView;
- (void)setPerson:(id)arg1;

@end
