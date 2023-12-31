
@interface WFVerdict : NSObject {
    WFLSMResult * LSMEvaluationResult;
    NSString * URL;
    int  evidence;
    NSString * message;
    bool  restricted;
}

+ (id)verdictWithRestriction:(bool)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5;

- (id)LSMEvaluationResult;
- (id)URL;
- (void)dealloc;
- (id)description;
- (int)evidence;
- (id)message;
- (bool)restricted;
- (void)setEvidence:(int)arg1;
- (void)setLSMEvaluationResult:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setURL:(id)arg1;

@end
