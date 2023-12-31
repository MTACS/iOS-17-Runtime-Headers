
@interface UITextPasteCoordinator : NSObject {
    <UITextPasteCoordinatorDelegate> * _delegate;
    NSMutableArray * _items;
    NSObject<OS_dispatch_group> * _wait;
}

@property (nonatomic, readonly) <UITextPasteCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_determineFinished;
- (void)_finish;
- (void)addItem:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)performBlockingWait:(double)arg1;
- (void)setResult:(id)arg1 forItem:(id)arg2;

@end
