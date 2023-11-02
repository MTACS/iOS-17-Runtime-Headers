
@interface HURoomListItemCell : UITableViewCell {
    UILabel * _nameLabel;
    <HFIconDescriptor> * _roomIconDescriptor;
}

@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, retain) <HFIconDescriptor> *roomIconDescriptor;
@property (nonatomic, copy) NSString *roomName;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (void)prepareForReuse;
- (id)roomIconDescriptor;
- (id)roomName;
- (void)setRoomIconDescriptor:(id)arg1;
- (void)setRoomName:(id)arg1;

@end
