
@interface LAACL : NSObject {
    struct __SecAccessControl { } * _acl;
    NSDictionary * _constraints;
    NSData * _data;
}

@property (nonatomic, readonly) NSDictionary *constraints;
@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (id)constraints;
- (id)data;
- (void)dealloc;
- (void)evaluateInContext:(id)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
