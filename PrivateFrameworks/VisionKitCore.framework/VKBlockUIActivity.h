
@interface VKBlockUIActivity : UIActivity {
    id /* block */  _block;
    UIImage * _image;
    NSString * _title;
    NSString * _type;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (long long)activityCategory;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id /* block */)block;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)image;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithTitle:(id)arg1 block:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 activityType:(id)arg3 block:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 image:(id)arg2 block:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 activityType:(id)arg3 block:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 block:(id /* block */)arg3;
- (void)performActivity;
- (void)setBlock:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)title;
- (id)type;

@end
