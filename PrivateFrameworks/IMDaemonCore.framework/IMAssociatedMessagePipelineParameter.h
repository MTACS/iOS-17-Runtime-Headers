
@interface IMAssociatedMessagePipelineParameter : IMTextMessagePipelineParameter <IMAssociatedMessageProcessingParameter> {
    NSString * _associatedMessageFallbackHash;
    NSString * _associatedMessageGUID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _associatedMessageRange;
    long long  _associatedMessageType;
}

@property (nonatomic, copy) NSString *associatedMessageFallbackHash;
@property (nonatomic, copy) NSString *associatedMessageGUID;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic) long long associatedMessageType;

- (void).cxx_destruct;
- (id)associatedMessageFallbackHash;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)description;
- (id)initWithBD:(id)arg1 idsTrustedData:(id)arg2;
- (id)initWithBDBasic:(id)arg1 idsTrustedData:(id)arg2;
- (void)setAssociatedMessageFallbackHash:(id)arg1;
- (void)setAssociatedMessageGUID:(id)arg1;
- (void)setAssociatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAssociatedMessageType:(long long)arg1;

@end
