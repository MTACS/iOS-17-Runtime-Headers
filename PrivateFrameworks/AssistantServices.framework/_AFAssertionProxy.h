
@interface _AFAssertionProxy : NSObject <AFRelinquishableAssertion> {
    AFAssertionCoordinator * _coordinator;
    _AFAssertionImpl * _impl;
}

@property (nonatomic, readonly) AFAssertionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)initWithImpl:(id)arg1 coordinator:(id)arg2;
- (void)relinquishWithContext:(id)arg1 options:(unsigned long long)arg2;
- (void)relinquishWithError:(id)arg1 options:(unsigned long long)arg2;
- (id)uuid;

@end
