
@interface MKTransitItemReferenceDateUpdater : NSObject {
    bool  _active;
    <MKTransitItemReferenceDateUpdaterDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MKTransitItemReferenceDateUpdaterDelegate> *delegate;

+ (void)_addUpdater:(id)arg1;
+ (void)_cancelReferenceDateUpdate;
+ (id)_currentTimeWithRoundedSeconds;
+ (bool)_needsUpdateReferenceDate;
+ (void)_referenceDateUpdateTimerFired;
+ (void)_removeUpdater:(id)arg1;
+ (void)_scheduleReferenceDateUpdate;
+ (void)_updateReferenceDate;
+ (unsigned long long)_updaterCount;
+ (void)initialize;
+ (id)referenceDate;
+ (double)referenceDateAsTimeInterval;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
