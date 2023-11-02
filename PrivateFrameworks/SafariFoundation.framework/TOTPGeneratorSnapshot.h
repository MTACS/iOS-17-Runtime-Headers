
@interface TOTPGeneratorSnapshot : NSObject {
    SFAutoFillOneTimeCode * _oneTimeCode;
    NSDate * _startDateOfInterval;
}

@property (nonatomic, retain) SFAutoFillOneTimeCode *oneTimeCode;
@property (nonatomic, retain) NSDate *startDateOfInterval;

- (void).cxx_destruct;
- (id)oneTimeCode;
- (void)setOneTimeCode:(id)arg1;
- (void)setStartDateOfInterval:(id)arg1;
- (id)startDateOfInterval;

@end
