
@interface _UICAPackageView : UIView {
    CAPackage * _package;
    NSArray * _rootViews;
}

+ (id)_newViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3;
+ (bool)_shouldCatchDecodingExceptions;
+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;
+ (void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;
+ (void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)publishedObjectWithName:(id)arg1;
- (id)publishedViewWithName:(id)arg1;

@end
