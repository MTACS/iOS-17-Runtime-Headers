
@interface GKActivity : NSObject {
    NSObject<OS_os_activity> * _activity;
    unsigned int  _mode;
    NSString * _name;
    NSObject<OS_os_activity> * _parent;
}

@property (nonatomic, retain) NSObject<OS_os_activity> *activity;
@property (nonatomic) unsigned int mode;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSObject<OS_os_activity> *parent;

+ (id)activity;
+ (id)currentOrNew;
+ (id)detached;
+ (void)execute:(id /* block */)arg1;
+ (id)named:(id)arg1;
+ (void)named:(id)arg1 execute:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)activity;
- (id)child;
- (void)createActivity;
- (void)execute:(id /* block */)arg1;
- (id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned int)arg3;
- (unsigned int)mode;
- (id)name;
- (id)named:(id)arg1;
- (void)named:(id)arg1 execute:(id /* block */)arg2;
- (id)parent;
- (void)setActivity:(id)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;

@end
