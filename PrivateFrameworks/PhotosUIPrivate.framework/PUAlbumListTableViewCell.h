
@interface PUAlbumListTableViewCell : UITableViewCell {
    <PUAlbumListTableViewCellDelegate> * _stateChangeDelegate;
}

@property (nonatomic) <PUAlbumListTableViewCellDelegate> *stateChangeDelegate;

- (void).cxx_destruct;
- (void)setStateChangeDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stateChangeDelegate;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
