
@interface SBSystemApertureLayoutAssertion : NSObject <SAInvalidatable> {
    NSMutableSet * _invalidationBlocks;
    id /* block */  _invalidationHandler;
    long long  _maximumPermittedLayoutMode;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long maximumPermittedLayoutMode;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)addInvalidationBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMaximumPermittedLayoutMode:(long long)arg1 reason:(id)arg2 invalidationHandler:(id /* block */)arg3;
- (void)invalidateWithReason:(id)arg1;
- (bool)isValid;
- (long long)maximumPermittedLayoutMode;
- (id)reason;

@end
