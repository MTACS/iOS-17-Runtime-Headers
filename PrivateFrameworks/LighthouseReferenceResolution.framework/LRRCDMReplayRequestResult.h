
@interface LRRCDMReplayRequestResult : NSObject {
    SIRINLUEXTERNALCDMNluRequest * _request;
    SIRINLUEXTERNALCDMNluResponse * _responseReplay;
}

@property (nonatomic, readonly) SIRINLUEXTERNALCDMNluRequest *request;
@property (nonatomic, readonly) SIRINLUEXTERNALCDMNluResponse *responseReplay;

- (void).cxx_destruct;
- (id)initWithReplayResult:(id)arg1 responseReplay:(id)arg2;
- (id)request;
- (id)responseReplay;

@end
