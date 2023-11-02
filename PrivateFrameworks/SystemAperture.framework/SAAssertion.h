
@interface SAAssertion : NSObject <SAInvalidatable> {
    NSDate * _creationDate;
    NSMutableOrderedSet * _invalidationBlocks;
    NSString * _invalidationReason;
    bool  _valid;
}

@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_descriptionConstituents, nonatomic, readonly, copy) NSArray *descriptionConstituents;
@property (readonly) unsigned long long hash;
@property (getter=_invalidationReason, nonatomic, readonly, copy) NSString *invalidationReason;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (id)_invalidationReason;
- (void)addInvalidationBlock:(id /* block */)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidateWithReason:(id)arg1;
- (bool)isValid;

@end
