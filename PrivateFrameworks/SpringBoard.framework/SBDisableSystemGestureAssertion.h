
@interface SBDisableSystemGestureAssertion : BSSimpleAssertion {
    NSSet * _exceptions;
}

@property (nonatomic, retain) NSSet *exceptions;

- (void).cxx_destruct;
- (id)exceptions;
- (void)setExceptions:(id)arg1;

@end
