
@interface ARReplayMovieDataWrapper : NSObject {
    id  _data;
    double  _timestamp;
}

@property (nonatomic, retain) id data;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)data;
- (void)setData:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
