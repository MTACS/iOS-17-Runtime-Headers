
@interface PXAlertConfiguration : NSObject <NSCopying> {
    NSMutableArray * _actions;
    id /* block */  _completionHandler;
    UIViewController * _contentViewController;
    UIViewController * _headerContentViewController;
    NSString * _message;
    <UIPopoverPresentationControllerSourceItem> * _sourceItem;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, readonly) NSMutableArray *actions;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, retain) UIViewController *headerContentViewController;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) <UIPopoverPresentationControllerSourceItem> *sourceItem;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)actions;
- (void)addActionWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block */)arg3;
- (void)addActions:(id)arg1;
- (id /* block */)completionHandler;
- (void)configureForError:(id)arg1;
- (void)configureForPlaceholder:(id)arg1;
- (id)contentViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)featureNotEnabledWithDocumentationURLString:(id)arg1;
- (id)headerContentViewController;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)message;
- (void)notImplementedWithTrackingRadar:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setHeaderContentViewController:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceItem;
- (long long)style;
- (id)title;

@end
