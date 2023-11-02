
@interface CDMMentionDetectorResponseCommand : CDMBaseCommand {
    SIRINLUINTERNALMENTION_DETECTORMentionDetectorResponse * _response;
}

@property (nonatomic, readonly) SIRINLUINTERNALMENTION_DETECTORMentionDetectorResponse *response;

- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1;
- (id)response;

@end
