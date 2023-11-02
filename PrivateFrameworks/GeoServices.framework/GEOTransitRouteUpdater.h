
@interface GEOTransitRouteUpdater : NSObject {
    bool  _active;
    <GEOTransitRouteUpdaterDelegate> * _delegate;
    NSSet * _requests;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <GEOTransitRouteUpdaterDelegate> *delegate;
@property (nonatomic, copy) NSSet *requests;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 andInitialTTL:(double)arg2;
- (bool)isActive;
- (id)requests;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequests:(id)arg1;

@end
