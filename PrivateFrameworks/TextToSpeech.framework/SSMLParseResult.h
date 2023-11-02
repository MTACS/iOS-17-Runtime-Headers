
@interface SSMLParseResult : NSObject {
    SSMLParseError * _error;
    NSString * _plainTalkResult;
    NSString * _plainTextResult;
    NSString * _ssmlResult;
    NSArray * _utteranceResult;
}

@property (nonatomic, retain) SSMLParseError *error;
@property (nonatomic, retain) NSString *plainTalkResult;
@property (nonatomic, retain) NSString *plainTextResult;
@property (nonatomic, retain) NSString *ssmlResult;
@property (nonatomic, retain) NSArray *utteranceResult;

- (void).cxx_destruct;
- (id)error;
- (id)plainTalkResult;
- (id)plainTextResult;
- (void)setError:(id)arg1;
- (void)setPlainTalkResult:(id)arg1;
- (void)setPlainTextResult:(id)arg1;
- (void)setSsmlResult:(id)arg1;
- (void)setUtteranceResult:(id)arg1;
- (id)ssmlResult;
- (id)utteranceResult;

@end
