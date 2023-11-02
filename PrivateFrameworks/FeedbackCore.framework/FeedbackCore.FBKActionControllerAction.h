
@interface FeedbackCore.FBKActionControllerAction : NSObject {
    void actionHandler;
    void destructive;
    void image;
    void title;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic) bool destructive;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (bool)destructive;
- (id)image;
- (id)init;
- (id)initWithTitle:(id)arg1 image:(id)arg2 actionHandler:(id /* block */)arg3;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
