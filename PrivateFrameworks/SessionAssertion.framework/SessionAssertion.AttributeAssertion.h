
@interface SessionAssertion.AttributeAssertion : _TtCs12_SwiftObject {
    void _lock_invalidationState;
    void _lock_state;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  acquisitionDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  attribute;
    void duration;
    void explanation;
    void identifier;
    void invalidationHandler;
    void lock;
    void manager;
    void target;
}

- (void)invalidate;

@end
