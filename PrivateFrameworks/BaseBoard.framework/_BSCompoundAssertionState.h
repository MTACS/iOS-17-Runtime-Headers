
@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState> {
    bool  _active;
    NSOrderedSet * _context;
}

@property (getter=isActive, readonly) bool active;
@property (readonly) NSSet *context;
@property (readonly) NSOrderedSet *orderedContext;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (bool)isActive;
- (id)orderedContext;

@end
