
@interface _SYWeakServiceDBRef : NSObject {
    _SYSharedServiceDB * _db;
    NSString * _name;
}

@property (nonatomic) _SYSharedServiceDB *db;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)db;
- (id)initWithServiceName:(id)arg1;
- (id)name;
- (void)setDb:(id)arg1;
- (void)setName:(id)arg1;

@end
