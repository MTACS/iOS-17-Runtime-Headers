
@interface UIViewPropertyAnimatorTrackingState : NSObject {
    bool  _optimizationsEnabled;
    bool  _scrubsLinearly;
    bool  _shouldLayoutSubviews;
    bool  _startPaused;
    bool  _userInteractionEnabled;
    NSUUID * _uuid;
}

@property (nonatomic) bool optimizationsEnabled;
@property (nonatomic) bool scrubsLinearly;
@property (nonatomic) bool shouldLayoutSubviews;
@property (nonatomic) bool startPaused;
@property (nonatomic) bool userInteractionEnabled;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)init;
- (bool)optimizationsEnabled;
- (bool)scrubsLinearly;
- (void)setOptimizationsEnabled:(bool)arg1;
- (void)setScrubsLinearly:(bool)arg1;
- (void)setShouldLayoutSubviews:(bool)arg1;
- (void)setStartPaused:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (bool)shouldLayoutSubviews;
- (bool)startPaused;
- (bool)userInteractionEnabled;
- (id)uuid;

@end
