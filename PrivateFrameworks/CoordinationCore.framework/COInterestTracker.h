
@interface COInterestTracker : NSObject {
    <COInterestTrackerDelegate> * _delegate;
    NSSet * _interests;
    bool  _primaryAvailable;
    COClusterMember * _secondary;
}

@property (nonatomic, readonly) <COInterestTrackerDelegate> *delegate;
@property (nonatomic, copy) NSSet *interests;
@property (nonatomic) bool primaryAvailable;
@property (nonatomic, retain) COClusterMember *secondary;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 primaryAvailable:(bool)arg2 secondary:(id)arg3;
- (id)interests;
- (bool)primaryAvailable;
- (id)secondary;
- (void)setInterests:(id)arg1;
- (void)setPrimaryAvailable:(bool)arg1;
- (void)setSecondary:(id)arg1;

@end
