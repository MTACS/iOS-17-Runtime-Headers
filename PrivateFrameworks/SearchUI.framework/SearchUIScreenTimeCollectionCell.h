
@interface SearchUIScreenTimeCollectionCell : SearchUICollectionViewCell {
    SearchUIScreenTimeView * _screenTimeView;
}

@property (retain) SearchUIScreenTimeView *screenTimeView;

- (void).cxx_destruct;
- (id)screenTimeView;
- (void)setScreenTimeView:(id)arg1;
- (id)sizingView;
- (void)updateWithRowModel:(id)arg1;

@end
