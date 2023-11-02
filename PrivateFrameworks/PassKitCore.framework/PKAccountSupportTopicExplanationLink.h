
@interface PKAccountSupportTopicExplanationLink : NSObject {
    unsigned long long  _action;
    NSString * _text;
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)initWithDictionary:(id)arg1;
- (id)text;
- (id)url;

@end
