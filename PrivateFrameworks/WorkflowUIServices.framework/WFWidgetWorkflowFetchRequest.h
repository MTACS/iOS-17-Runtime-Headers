
@interface WFWidgetWorkflowFetchRequest : NSObject {
    id /* block */  _completionHandler;
    NSString * _identifier;
    unsigned long long  _limit;
    unsigned long long  _retryCount;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) unsigned long long retryCount;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (id)identifier;
- (id)initWithFetchType:(unsigned long long)arg1 identifier:(id)arg2 limit:(unsigned long long)arg3 retryCount:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (unsigned long long)limit;
- (unsigned long long)retryCount;
- (unsigned long long)type;

@end
