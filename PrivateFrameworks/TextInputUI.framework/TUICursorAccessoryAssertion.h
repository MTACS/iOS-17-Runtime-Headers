
@interface TUICursorAccessoryAssertion : NSObject <TUICursorAccessoryAssertion> {
    TUICursorAccessory * _accessory;
    unsigned long long  _accessoryType;
    TUICursorAccessoryAssertionController * _controller;
}

@property (nonatomic, retain) TUICursorAccessory *accessory;
@property (nonatomic) unsigned long long accessoryType;
@property (nonatomic) TUICursorAccessoryAssertionController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessory;
- (unsigned long long)accessoryType;
- (id)controller;
- (void)dealloc;
- (id)description;
- (id)initWithAccessoryType:(unsigned long long)arg1 accessory:(id)arg2 controller:(id)arg3;
- (void)invalidate;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryType:(unsigned long long)arg1;
- (void)setController:(id)arg1;

@end
