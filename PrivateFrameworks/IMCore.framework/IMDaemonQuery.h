
@interface IMDaemonQuery : NSObject {
    NSString * _ID;
    id /* block */  _completionHandler;
    NSString * _key;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)ID;
- (id /* block */)completionHandler;
- (id)description;
- (id)initWithID:(id)arg1 key:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)key;
- (id)startDate;

@end
