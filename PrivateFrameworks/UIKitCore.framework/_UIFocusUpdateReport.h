
@interface _UIFocusUpdateReport : NSObject {
    UIFocusUpdateContext * _context;
    UIFocusSystem * _focusSystem;
}

@property (nonatomic, retain) UIFocusUpdateContext *context;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly) bool shouldLog;

- (void).cxx_destruct;
- (id)context;
- (id)focusSystem;
- (id)init;
- (id)initWithFocusSystem:(id)arg1;
- (void)setContext:(id)arg1;
- (bool)shouldLog;

@end
