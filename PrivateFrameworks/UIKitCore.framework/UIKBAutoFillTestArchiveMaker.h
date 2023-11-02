
@interface UIKBAutoFillTestArchiveMaker : NSObject <NSKeyedArchiverDelegate> {
    long long  _currentTableViewTag;
    long long  _currentTextFieldTag;
    UIKBAutoFillTestArchive * _testArchive;
    UIViewController * _viewControllerToSnapshot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)archiveMakerWithViewControllerToSnapshot:(id)arg1;

- (void).cxx_destruct;
- (void)_applyPropertiesFromLabel:(id)arg1 toLabel:(id)arg2;
- (void)_applyPropertiesFromView:(id)arg1 toView:(id)arg2;
- (id)_cloneBarButtonItem:(id)arg1;
- (id)_cloneButton:(id)arg1;
- (id)_cloneGenericView:(id)arg1;
- (id)_cloneLabel:(id)arg1;
- (id)_cloneNavigationItem:(id)arg1;
- (id)_cloneTableView:(id)arg1;
- (id)_cloneTextField:(id)arg1;
- (id)_cloneTextView:(id)arg1;
- (id)_cloneView:(id)arg1;
- (id)_cloneViewHierarchyFromRootView:(id)arg1;
- (id)_makeCopyOfObject:(id)arg1;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)initWithViewControllerToSnapshot:(id)arg1;
- (id)makeArchive;

@end
