
@interface ISCreateAccountPromptOperation : ISOperation {
    NSString * _reason;
    long long  _responseType;
}

@property (nonatomic, retain) NSString *reason;
@property (nonatomic) long long responseType;

- (void).cxx_destruct;
- (bool)_hasActiveICloudAccount;
- (long long)_mapCorrectSelectedButtonWithDialog:(id)arg1;
- (id)_newCreateAccountDialog;
- (id)init;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (long long)responseType;
- (void)run;
- (void)setReason:(id)arg1;
- (void)setResponseType:(long long)arg1;

@end
