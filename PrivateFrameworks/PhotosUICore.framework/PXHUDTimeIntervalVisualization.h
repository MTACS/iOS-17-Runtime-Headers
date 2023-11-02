
@interface PXHUDTimeIntervalVisualization : PXHUDVisualization {
    id  _stateTransitionHandlerToken;
    PXTimeInterval * _timeInterval;
}

@property (nonatomic, retain) PXTimeInterval *timeInterval;

+ (id)visualizationWithTimeInterval:(id)arg1;

- (void).cxx_destruct;
- (void)setTimeInterval:(id)arg1;
- (id)timeInterval;

@end
