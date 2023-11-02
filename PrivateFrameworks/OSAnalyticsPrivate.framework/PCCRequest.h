
@interface PCCRequest : NSObject {
    id /* block */  _callback;
    NSString * _event;
    NSString * _jid;
    NSDictionary * _options;
    NSString * _type;
}

@property (copy) id /* block */ callback;
@property (readonly) NSString *event;
@property (readonly) NSString *jid;
@property (readonly) NSDictionary *options;
@property (readonly) NSString *type;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)description;
- (id)event;
- (id)initWithMessage:(id)arg1 options:(id)arg2;
- (id)jid;
- (id)options;
- (void)setCallback:(id /* block */)arg1;
- (id)type;

@end
