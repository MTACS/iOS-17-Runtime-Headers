
@interface _AFAssertionImpl : NSObject <AFAssertion> {
    AFAssertionContext * _context;
    AFTwoArgumentSafetyBlock * _relinquishmentHandler;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) AFAssertionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)initWithUUID:(id)arg1 context:(id)arg2 relinquishmentHandler:(id /* block */)arg3;
- (void)invokeRelinquishmentHandlerWithContext:(id)arg1 error:(id)arg2;
- (id)uuid;

@end
