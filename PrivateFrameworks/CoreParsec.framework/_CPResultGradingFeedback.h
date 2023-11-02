
@interface _CPResultGradingFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPResultGradingFeedback> {
    int  _grade;
    _CPSearchResultForFeedback * _result;
    NSString * _textFeedback;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int grade;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textFeedback;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)grade;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)result;
- (void)setGrade:(int)arg1;
- (void)setResult:(id)arg1;
- (void)setTextFeedback:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)textFeedback;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
