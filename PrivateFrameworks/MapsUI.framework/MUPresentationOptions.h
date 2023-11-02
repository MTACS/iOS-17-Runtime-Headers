
@interface MUPresentationOptions : NSObject <NSCopying> {
    UIBarButtonItem * _barButtonItem;
    UIContextMenuInteraction * _contextMenuInteraction;
    UIViewController * _presentingViewController;
    <MUActivityObserving> * _progressObserver;
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
}

@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (nonatomic, retain) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) <MUActivityObserving> *progressObserver;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;

- (void).cxx_destruct;
- (id)barButtonItem;
- (id)contextMenuInteraction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)presentingViewController;
- (id)progressObserver;
- (void)setBarButtonItem:(id)arg1;
- (void)setContextMenuInteraction:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressObserver:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;

@end
