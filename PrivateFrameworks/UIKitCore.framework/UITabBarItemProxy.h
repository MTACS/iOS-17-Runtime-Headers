
@interface UITabBarItemProxy : NSObject {
    UITabBarItem * _item;
    UITabBarButton * _view;
}

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 inTabBar:(id)arg2;
- (id)item;
- (void)setSelected:(bool)arg1;
- (id)view;

@end
