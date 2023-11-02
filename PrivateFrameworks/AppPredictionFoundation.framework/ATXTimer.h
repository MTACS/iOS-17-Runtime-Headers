
@interface ATXTimer : NSObject {
    NSObject<OS_dispatch_source> * _source;
}

+ (id)fireAtDate:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDate:(id)arg1 block:(id /* block */)arg2;

@end
