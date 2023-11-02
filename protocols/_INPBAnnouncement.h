
@protocol _INPBAnnouncement <NSObject>

@required

- (unsigned long long)endTime;
- (bool)hasEndTime;
- (bool)hasIdentifier;
- (bool)hasSpeechDataTranscription;
- (bool)hasSpeechDataURL;
- (bool)hasStartTime;
- (NSString *)identifier;
- (void)setEndTime:(unsigned long long)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setSpeechDataTranscription:(NSString *)arg1;
- (void)setSpeechDataURL:(_INPBURLValue *)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (NSString *)speechDataTranscription;
- (_INPBURLValue *)speechDataURL;
- (unsigned long long)startTime;

@end
