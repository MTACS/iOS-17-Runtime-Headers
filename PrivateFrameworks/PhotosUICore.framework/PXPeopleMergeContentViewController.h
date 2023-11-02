
@interface PXPeopleMergeContentViewController : UIViewController {
    PHPerson * _draggedPerson;
    PHPerson * _targetPerson;
}

@property (nonatomic, retain) PHPerson *draggedPerson;
@property (nonatomic, retain) PHPerson *targetPerson;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)draggedPerson;
- (id)initWithTargetPerson:(id)arg1 draggedPerson:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDraggedPerson:(id)arg1;
- (void)setTargetPerson:(id)arg1;
- (id)targetPerson;
- (void)viewDidLoad;

@end
