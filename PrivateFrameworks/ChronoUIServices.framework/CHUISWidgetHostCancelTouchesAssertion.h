
@interface CHUISWidgetHostCancelTouchesAssertion : NSObject <BSInvalidatable> {
    NSArray * _assertions;
    bool  _invalidated;
}

@property (nonatomic, readonly, copy) NSArray *assertions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assertions;
- (void)dealloc;
- (id)init;
- (id)initWithAssertions:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (void)setInvalidated:(bool)arg1;

@end
