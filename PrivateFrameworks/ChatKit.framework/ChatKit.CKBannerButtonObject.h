
@interface ChatKit.CKBannerButtonObject : NSObject {
    void handler;
    void menuItems;
    void title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSArray *menuItems;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)init;
- (id)initWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 handler:(id /* block */)arg2 menuItems:(id)arg3;
- (id)menuItems;
- (void)setHandler:(id /* block */)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
