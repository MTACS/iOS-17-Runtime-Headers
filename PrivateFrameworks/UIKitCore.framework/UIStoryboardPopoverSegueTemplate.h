
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {
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
- (id)passthroughViews;
- (unsigned long long)permittedArrowDirections;
- (id)segueWithDestinationViewController:(id)arg1;
- (void)setAnchorBarButtonItem:(id)arg1;
- (void)setAnchorView:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;

@end
