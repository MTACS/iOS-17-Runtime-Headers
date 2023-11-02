
@interface _BSCompoundAssertionAcquisitionReference : NSObject <BSInvalidatable> {
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _invalid;
    _BSCompoundAssertionAcquisitionRecord * _record;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)invalidate;

@end
