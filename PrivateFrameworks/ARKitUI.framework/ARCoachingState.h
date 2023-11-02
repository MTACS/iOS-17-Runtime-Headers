
@interface ARCoachingState : NSObject {
    ARCoachingOverlayView * _view;
}

@property (nonatomic, readonly) bool isViewActiveForState;
@property (nonatomic, readonly) long long requirements;
@property (nonatomic) ARCoachingOverlayView *view;

- (void).cxx_destruct;
- (id)doAction:(long long)arg1;
- (void)enter;
- (void)exit;
- (id)initWithView:(id)arg1;
- (bool)isViewActiveForState;
- (long long)requirements;
- (void)setView:(id)arg1;
- (id)view;

@end
