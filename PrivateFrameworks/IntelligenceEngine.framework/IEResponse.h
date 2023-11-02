
@interface IEResponse : NSObject {
    NSString * _dialogPhase;
    NSString * _inputGroupId;
    NSString * _response_id;
    bool  _sensitiveData;
}

@property (nonatomic, retain) NSString *dialogPhase;
@property (nonatomic, retain) NSString *inputGroupId;
@property (nonatomic, retain) NSString *response_id;
@property (nonatomic) bool sensitiveData;

- (void).cxx_destruct;
- (id)dialogPhase;
- (id)inputGroupId;
- (id)response_id;
- (bool)sensitiveData;
- (void)setDialogPhase:(id)arg1;
- (void)setInputGroupId:(id)arg1;
- (void)setResponse_id:(id)arg1;
- (void)setSensitiveData:(bool)arg1;

@end
