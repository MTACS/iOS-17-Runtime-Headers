
@interface PMLTrainingLogEntry : NSObject {
    unsigned long long  _serverIteration;
    double  _timestamp;
}

@property (nonatomic, readonly) unsigned long long serverIteration;
@property (nonatomic, readonly) double timestamp;

- (id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2;
- (unsigned long long)serverIteration;
- (double)timestamp;

@end
