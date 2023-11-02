
@interface RKRankedResponse : NSObject {
    unsigned long long  _inputMethod;
    NSString * _response;
    double  _score;
}

@property unsigned long long inputMethod;
@property (retain) NSString *response;
@property double score;

- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 inputMethod:(unsigned long long)arg2 score:(double)arg3;
- (unsigned long long)inputMethod;
- (id)response;
- (double)score;
- (void)setInputMethod:(unsigned long long)arg1;
- (void)setResponse:(id)arg1;
- (void)setScore:(double)arg1;

@end
