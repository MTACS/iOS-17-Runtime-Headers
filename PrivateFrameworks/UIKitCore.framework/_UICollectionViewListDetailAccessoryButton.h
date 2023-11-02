
@interface _UICollectionViewListDetailAccessoryButton : UIButton <_UICollectionViewListDetailAccessoryView> {
    UIColor * _accessoryBackgroundColor;
    UIColor * _accessoryTintColor;
    id /* block */  _actionHandler;
    <UITableConstants> * _constants;
    long long  _type;
}

@property (nonatomic, retain) UIColor *accessoryBackgroundColor;
@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, retain) <UITableConstants> *constants;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)_executeActionHandler;
- (id)_renderedImage;
- (id)accessoryBackgroundColor;
- (id)accessoryTintColor;
- (id /* block */)actionHandler;
- (id)constants;
- (id)init;
- (void)setAccessoryBackgroundColor:(id)arg1;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setConstants:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
