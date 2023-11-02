
@interface WFUserPromptOperation : WFOperation {
    unsigned long long  _flags;
    NSDictionary * _options;
    long long  _result;
    double  _timeout;
    NSDictionary * _userResponse;
}

@property (nonatomic) unsigned long long flags;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic) long long result;
@property (nonatomic) double timeout;
@property (nonatomic, readonly) NSDictionary *userResponse;

+ (id)sharedMapTable;

- (void).cxx_destruct;
- (void)_notification:(struct __CFUserNotification { }*)arg1 didFinishWithResponse:(unsigned long long)arg2;
- (void)_showPrompt;
- (unsigned long long)flags;
- (id)initWithOptions:(id)arg1 timeout:(double)arg2;
- (id)initWithOptions:(id)arg1 timeout:(double)arg2 flags:(unsigned long long)arg3;
- (id)options;
- (long long)result;
- (void)setFlags:(unsigned long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setResult:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (void)start;
- (double)timeout;
- (id)userResponse;

@end
