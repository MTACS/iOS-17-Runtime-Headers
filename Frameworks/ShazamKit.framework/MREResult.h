
@interface MREResult : NSObject {
    NSNumber * _freqSkew;
    double  _offset;
    NSNumber * _score;
    NSNumber * _timeSkew;
    unsigned long long  _trackID;
}

@property (nonatomic, readonly, retain) NSNumber *freqSkew;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly, retain) NSNumber *score;
@property (nonatomic, readonly, retain) NSNumber *timeSkew;
@property (nonatomic, readonly) unsigned long long trackID;

- (void)dealloc;
- (id)freqSkew;
- (id)initWithTrackId:(unsigned long long)arg1 offset:(double)arg2 timeSkew:(id)arg3 freqSkew:(id)arg4 score:(id)arg5;
- (double)offset;
- (id)score;
- (id)timeSkew;
- (unsigned long long)trackID;

@end
