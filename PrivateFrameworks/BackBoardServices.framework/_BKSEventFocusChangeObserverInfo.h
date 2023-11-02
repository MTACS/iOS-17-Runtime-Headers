
@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable> {
    unsigned long long  _propertyUpdateGeneration;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long propertyUpdateGeneration;
@property (readonly) Class superclass;
@property (getter=isValid) bool valid;

- (id)init;
- (void)invalidate;
- (bool)isValid;
- (unsigned long long)propertyUpdateGeneration;
- (void)setPropertyUpdateGeneration:(unsigned long long)arg1;
- (void)setValid:(bool)arg1;

@end
