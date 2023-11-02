
@interface _EXViewControllerSceneConfiguration : _EXSceneConfiguration <NSCopying> {
    UIStoryboard * _storyboard;
    NSString * _storyboardName;
    Class  _viewControllerClass;
    NSString * _viewControllerClassName;
}

@property (nonatomic, retain) UIStoryboard *storyboard;
@property (copy) NSString *storyboardName;
@property (nonatomic, retain) Class viewControllerClass;
@property (copy) NSString *viewControllerClassName;

- (void).cxx_destruct;
- (void)setStoryboard:(id)arg1;
- (void)setStoryboardName:(id)arg1;
- (void)setViewControllerClass:(Class)arg1;
- (void)setViewControllerClassName:(id)arg1;
- (id)storyboard;
- (id)storyboardName;
- (Class)viewControllerClass;
- (id)viewControllerClassName;

@end
