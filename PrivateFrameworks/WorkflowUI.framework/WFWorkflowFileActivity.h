
@interface WFWorkflowFileActivity : UIActivity {
    NSArray * _activityItems;
    unsigned long long  _arrowDirection;
    UIBarButtonItem * _barButtonItem;
    WFPopoverModel * _popoverModel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    WFFileRepresentation * _workflowFile;
}

@property (nonatomic, copy) NSArray *activityItems;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (nonatomic, retain) WFPopoverModel *popoverModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, readonly) WFFileRepresentation *workflowFile;

+ (id)activityType;

- (void).cxx_destruct;
- (id)_systemImageName;
- (id)activityItems;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (unsigned long long)arrowDirection;
- (id)barButtonItem;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)createViewController;
- (id)initWithPopoverModel:(id)arg1;
- (id)initWithSourceView:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 barButtonItem:(id)arg3;
- (void)performActivity;
- (id)popoverModel;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityItems:(id)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setBarButtonItem:(id)arg1;
- (void)setPopoverModel:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (id)workflowFile;

@end
