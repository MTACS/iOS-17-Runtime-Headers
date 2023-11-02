
@interface DTOSLogLoaderFetchTicket : DTOSLogLoaderTicket {
    OSLogEventStreamPosition * _currentPosition;
    double  _windowInSeconds;
}

@property (nonatomic, retain) OSLogEventStreamPosition *currentPosition;
@property (nonatomic) double windowInSeconds;

- (void).cxx_destruct;
- (id)currentPosition;
- (void)holdAgent:(id)arg1 loader:(id)arg2;
- (void)prepareAgent:(id)arg1 loader:(id)arg2;
- (void)setCurrentPosition:(id)arg1;
- (void)setWindowInSeconds:(double)arg1;
- (double)windowInSeconds;

@end
