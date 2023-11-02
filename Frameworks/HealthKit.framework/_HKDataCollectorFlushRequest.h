
@interface _HKDataCollectorFlushRequest : NSObject {
    id /* block */  _completion;
    NSDate * _date;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly, copy) NSDate *date;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)date;
- (id)initWithDate:(id)arg1 completion:(id /* block */)arg2;

@end
