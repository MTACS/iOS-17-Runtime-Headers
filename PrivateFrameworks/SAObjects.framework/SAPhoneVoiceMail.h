
@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, copy) NSNumber *length;

+ (id)voiceMail;
+ (id)voiceMailWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)filePath;
- (id)groupIdentifier;
- (id)length;
- (void)setFilePath:(id)arg1;
- (void)setLength:(id)arg1;

@end
