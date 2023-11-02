
@interface ActivityPlus : UIActivity {
    id /* block */  _actionHandler;
    UIImage * _activityImage;
    NSString * _activityTitle;
    NSString * _activityType;
}

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 type:(id)arg3 handler:(id /* block */)arg4;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end
