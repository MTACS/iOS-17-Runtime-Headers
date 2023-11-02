
@interface IMBalloonPluginPipelineParameter : IMTextMessagePipelineParameter <IMBalloonPluginPipelineParameter> {
    NSString * _associatedMessageGUID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _associatedMessageRange;
    long long  _associatedMessageType;
    NSString * _balloonPluginBundleID;
    NSData * _balloonPluginPayload;
    NSDictionary * _combinedPayloadAttachmentDictionary;
}

@property (nonatomic, copy) NSString *associatedMessageGUID;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic) long long associatedMessageType;
@property (nonatomic, copy) NSString *balloonPluginBundleID;
@property (nonatomic, copy) NSData *balloonPluginPayload;
@property (nonatomic, copy) NSDictionary *combinedPayloadAttachmentDictionary;

+ (id)logger;

- (void).cxx_destruct;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)balloonPluginBundleID;
- (id)balloonPluginPayload;
- (id)combinedPayloadAttachmentDictionary;
- (id)initWithBD:(id)arg1 idsTrustedData:(id)arg2;
- (void)setAssociatedMessageGUID:(id)arg1;
- (void)setAssociatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAssociatedMessageType:(long long)arg1;
- (void)setBalloonPluginBundleID:(id)arg1;
- (void)setBalloonPluginPayload:(id)arg1;
- (void)setCombinedPayloadAttachmentDictionary:(id)arg1;

@end
