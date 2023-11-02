
@protocol ECIMAPServerMessageBuilder <ECBaseServerMessageBuilderProtocol>

@required

- (unsigned int)imapUID;
- (NSSet *)labels;
- (void)setImapUID:(unsigned int)arg1;
- (void)setLabels:(NSSet *)arg1;

@end
