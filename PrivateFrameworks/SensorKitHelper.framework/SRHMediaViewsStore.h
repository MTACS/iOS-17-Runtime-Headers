
@interface SRHMediaViewsStore : NSObject {
    NSXPCConnection * _connection;
    bool  _connectionDidInvalidate;
    NSMapTable * _offScreenMediaViews;
    NSMapTable * _onScreenMediaViews;
    NSObject<OS_dispatch_queue> * _q;
    UIScrollView * _scrollView;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property bool connectionDidInvalidate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *q;

+ (void)initialize;

- (void)_writeMediaEventsToBiome:(id)arg1;
- (void)addViewToStore:(id)arg1;
- (id)connection;
- (bool)connectionDidInvalidate;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;
- (void)markViewsAsOffScreen;
- (void)markViewsAsOnScreen;
- (void)processScrollViewOffset;
- (id)q;
- (void)removeAllViews;
- (void)removeViewFromStore:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewVisibleArea;
- (void)setConnection:(id)arg1;
- (void)setConnectionDidInvalidate:(bool)arg1;
- (void)setQ:(id)arg1;
- (void)setupConnection;

@end
