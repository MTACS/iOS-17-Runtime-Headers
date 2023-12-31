
@interface VSUnbinder : NSObject {
    NSMapTable * _bindingsByBinder;
    bool  _invalid;
}

@property (nonatomic, retain) NSMapTable *bindingsByBinder;
@property (getter=isInvalid, nonatomic) bool invalid;

- (void).cxx_destruct;
- (void)binder:(id)arg1 didEstablishBinding:(id)arg2;
- (void)binder:(id)arg1 didTearDownBinding:(id)arg2;
- (id)bindingsByBinder;
- (void)dealloc;
- (id)init;
- (bool)isInvalid;
- (void)setBindingsByBinder:(id)arg1;
- (void)setInvalid:(bool)arg1;

@end
