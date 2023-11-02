
@interface CACMessageDisplayOperation : NSOperation {
    bool  _ignore;
    NSString * _message;
    long long  _type;
}

@property bool ignore;
@property (retain) NSString *message;
@property long long type;

- (void).cxx_destruct;
- (bool)ignore;
- (id)initWithMessageString:(id)arg1 type:(long long)arg2;
- (void)main;
- (id)message;
- (void)setIgnore:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
