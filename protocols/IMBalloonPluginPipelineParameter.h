
@protocol IMBalloonPluginPipelineParameter <IMTextMessageProcessingParameter>

@required

- (NSString *)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (NSString *)balloonPluginBundleID;
- (NSData *)balloonPluginPayload;
- (NSDictionary *)combinedPayloadAttachmentDictionary;
- (void)setAssociatedMessageGUID:(NSString *)arg1;
- (void)setAssociatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAssociatedMessageType:(long long)arg1;
- (void)setBalloonPluginBundleID:(NSString *)arg1;
- (void)setBalloonPluginPayload:(NSData *)arg1;
- (void)setCombinedPayloadAttachmentDictionary:(NSDictionary *)arg1;

@end
