
@interface GCFrontmostApplicationObserver : NSObject {
    <GCFrontmostApplicationObserverDelegate> * _delegate;
    int  _frontmostPid;
}

@property (nonatomic) <GCFrontmostApplicationObserverDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
