
@interface _CNChangeHistoryFetchExecutionResponse : NSObject {
    long long  _count;
    NSArray * _events;
    NSData * _token;
}

@property (readonly) long long count;
@property (readonly, copy) NSArray *events;
@property (readonly, copy) NSData *token;

- (void).cxx_destruct;
- (long long)count;
- (id)events;
- (id)initWithEvents:(id)arg1 count:(long long)arg2 token:(id)arg3;
- (id)token;

@end
