
@protocol MSCMSMessage <MessageSecurityMessage>

@required

- (MSOID *)contentType;
- (NSData *)dataContent;
- (<MSCMSMessage> *)embeddedContent;
- (void)setContentType:(MSOID *)arg1;
- (void)setDataContent:(NSData *)arg1;
- (void)setEmbeddedContent:(id <MSCMSMessage>)arg1;
- (MSOID *)type;

@end
