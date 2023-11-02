
@interface MNArrivalRegionTimer : NSObject {
    GEOArrivalRegion * _arrivalRegion;
    <MNArrivalRegionTimerDelegate> * _delegate;
    NSTimer * _timer;
}

@property (nonatomic) <MNArrivalRegionTimerDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithArrivalRegion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateForLocation:(id)arg1;

@end
