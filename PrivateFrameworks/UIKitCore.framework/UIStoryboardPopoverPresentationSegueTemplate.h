
@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate {
    UIBarButtonItem * _anchorBarButtonItem;
    UIView * _anchorView;
    NSArray * _passthroughViews;
    unsigned long long  _permittedArrowDirections;
}

@property (nonatomic, retain) UIBarButtonItem *anchorBarButtonItem;
@property (nonatomic, retain) UIView *anchorView;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (nonatomic) unsigned long long permittedArrowDirections;

- (void).cxx_destruct;
- (id)anchorBarButtonItem;
- (id)anchorView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)arg1;
- (id)passthroughViews;
- (unsigned long long)permittedArrowDirections;
- (void)setAnchorBarButtonItem:(id)arg1;
- (void)setAnchorView:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;

@end
