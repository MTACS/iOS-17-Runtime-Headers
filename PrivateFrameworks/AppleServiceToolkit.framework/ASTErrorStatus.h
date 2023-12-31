
@interface ASTErrorStatus : NSObject {
    NSNumber * _code;
    NSMutableDictionary * _data;
    NSString * _reason;
}

@property (nonatomic, retain) NSNumber *code;
@property (nonatomic, retain) NSMutableDictionary *data;
@property (nonatomic, retain) NSString *reason;

+ (id)errorStatusWithCode:(long long)arg1;

- (void).cxx_destruct;
- (id)code;
- (id)data;
- (id)dictionary;
- (id)init;
- (id)reason;
- (id)reasonForCode:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setData:(id)arg1;
- (void)setReason:(id)arg1;

@end
