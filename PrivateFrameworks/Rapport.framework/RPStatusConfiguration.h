
@interface RPStatusConfiguration : NSObject {
    unsigned long long  _flags;
    id /* block */  _handler;
    double  _leeway;
    NSString * _statusID;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly) double leeway;
@property (nonatomic, readonly, copy) NSString *statusID;

- (void).cxx_destruct;
- (unsigned long long)flags;
- (id /* block */)handler;
- (id)initWithStatusID:(id)arg1 leeway:(double)arg2 configurationFlags:(unsigned long long)arg3 statusUpdateHandler:(id /* block */)arg4;
- (double)leeway;
- (id)statusID;

@end
