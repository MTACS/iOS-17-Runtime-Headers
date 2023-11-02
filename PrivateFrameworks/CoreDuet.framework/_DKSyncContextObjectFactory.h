
@interface _DKSyncContextObjectFactory : NSObject {
    Class  _class;
    _DKSyncContext * _context;
    NSMutableDictionary * _instances;
}

@property (nonatomic, readonly) Class class;
@property (nonatomic, readonly) _DKSyncContext *context;

+ (id)objectFactoryForClass:(Class)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (Class)class;
- (id)context;
- (id)initWithContext:(id)arg1 fabricateClass:(Class)arg2;
- (id)instance;

@end
