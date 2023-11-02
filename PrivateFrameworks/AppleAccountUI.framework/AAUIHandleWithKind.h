
@interface AAUIHandleWithKind : NSObject {
    NSString * _handle;
    unsigned long long  _kind;
}

@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) unsigned long long kind;

- (void).cxx_destruct;
- (id)handle;
- (id)initWithHandle:(id)arg1 kind:(unsigned long long)arg2;
- (unsigned long long)kind;

@end
