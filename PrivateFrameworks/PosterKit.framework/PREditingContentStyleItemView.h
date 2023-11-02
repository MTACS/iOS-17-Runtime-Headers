
@interface PREditingContentStyleItemView : PRSelectableEditingItemView {
    PREditingPosterContentStyleCoordinator * _contentStyleCoordinator;
    UIView * _itemView;
}

@property (nonatomic, retain) PREditingPosterContentStyleCoordinator *contentStyleCoordinator;
@property (nonatomic, retain) UIView *itemView;

- (void).cxx_destruct;
- (id)contentStyleCoordinator;
- (id)initWithContentStyleCoordinator:(id)arg1;
- (id)itemView;
- (id)localizedName;
- (void)setContentStyleCoordinator:(id)arg1;
- (void)setItemView:(id)arg1;

@end
