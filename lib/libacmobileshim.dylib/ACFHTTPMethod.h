
@interface ACFHTTPMethod : NSObject {
    NSData * _body;
    NSDictionary * _headerFields;
    NSString * _name;
}

@property (retain) NSData *body;
@property (retain) NSDictionary *headerFields;
@property (retain) NSString *name;

+ (id)method;
+ (id)methodWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3;
+ (id)methodWithName:(id)arg1 headerFields:(id)arg2 bodyPropertyList:(id)arg3 error:(id*)arg4;

- (id)body;
- (void)dealloc;
- (id)headerFields;
- (id)init;
- (id)initWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3;
- (id)name;
- (void)setBody:(id)arg1;
- (void)setHeaderFields:(id)arg1;
- (void)setName:(id)arg1;

@end
