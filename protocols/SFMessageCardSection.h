
@protocol SFMessageCardSection <SFCardSection>

@required

- (NSURL *)audioMessageURL;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFMessageAttachment *)messageAttachment;
- (int)messageServiceType;
- (int)messageStatus;
- (NSString *)messageText;
- (void)setAudioMessageURL:(NSURL *)arg1;
- (void)setMessageAttachment:(SFMessageAttachment *)arg1;
- (void)setMessageServiceType:(int)arg1;
- (void)setMessageStatus:(int)arg1;
- (void)setMessageText:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
