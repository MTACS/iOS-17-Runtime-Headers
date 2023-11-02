
@interface ChatKit.CKMenuItemObject : NSObject {
    void handler;
    void imageName;
    void title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)imageName;
- (id)init;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 handler:(id /* block */)arg3;
- (void)setHandler:(id /* block */)arg1;
- (void)setImageName:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)uiAction;

@end
