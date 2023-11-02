
@interface HDSPXPCActivity : NSObject <HDSPActivity> {
    NSObject<OS_xpc_object> * _activity;
    NSObject<OS_xpc_object> * _criteria;
    NSString * _name;
    unsigned long long  _options;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activity;
- (id)criteria;
- (bool)deferIfNecessary;
- (id)initWithEventName:(id)arg1 options:(unsigned long long)arg2 criteria:(id)arg3;
- (id)initWithEventName:(id)arg1 options:(unsigned long long)arg2 criteria:(id)arg3 activity:(id)arg4;
- (id)name;
- (unsigned long long)options;

@end
