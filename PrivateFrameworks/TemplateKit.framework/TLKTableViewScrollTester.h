
@interface TLKTableViewScrollTester : NSObject {
    id /* block */  _completion;
    bool  _directionUp;
    bool  _finishedFirstScroll;
    id /* block */  _firstScroll;
    double  _scrollTime;
    double  _startTime;
    UIScrollView * _tableView;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool directionUp;
@property (nonatomic) bool finishedFirstScroll;
@property (nonatomic, copy) id /* block */ firstScroll;
@property (nonatomic) double scrollTime;
@property (nonatomic) double startTime;
@property (nonatomic, retain) UIScrollView *tableView;

- (void).cxx_destruct;
- (id /* block */)completion;
- (bool)directionUp;
- (void)finishFirstScrollIfNeeded;
- (bool)finishedFirstScroll;
- (void)fire:(id)arg1;
- (id /* block */)firstScroll;
- (id)init;
- (void)performScrollTestOnTableView:(id)arg1 completion:(id /* block */)arg2;
- (void)performScrollTestOnTableView:(id)arg1 firstScroll:(id /* block */)arg2 completion:(id /* block */)arg3;
- (double)scrollTime;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDirectionUp:(bool)arg1;
- (void)setFinishedFirstScroll:(bool)arg1;
- (void)setFirstScroll:(id /* block */)arg1;
- (void)setScrollTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTableView:(id)arg1;
- (double)startTime;
- (id)tableView;

@end
