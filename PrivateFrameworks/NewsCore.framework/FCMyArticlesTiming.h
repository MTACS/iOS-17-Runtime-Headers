
@interface FCMyArticlesTiming : NSObject {
    double  _evergreenNetworkTime;
    double  _feedsNetworkTime;
    double  _scoringTime;
    double  _totalTime;
}

@property (nonatomic, readonly) double evergreenNetworkTime;
@property (nonatomic, readonly) double feedsNetworkTime;
@property (nonatomic, readonly) double scoringTime;
@property (nonatomic, readonly) double totalTime;

- (double)evergreenNetworkTime;
- (double)feedsNetworkTime;
- (id)init;
- (id)initWithTotalTime:(double)arg1 feedsNetworkTime:(double)arg2 evergreenNetworkTime:(double)arg3 scoringTime:(double)arg4;
- (double)scoringTime;
- (double)totalTime;

@end
