
@protocol _INPBSpeakerIDInfo <NSObject>

@required

- (int)StringAsSpeakerIDConfidence:(NSString *)arg1;
- (bool)hasSharedUserID;
- (bool)hasSpeakerIDConfidence;
- (void)setHasSpeakerIDConfidence:(bool)arg1;
- (void)setSharedUserID:(_INPBString *)arg1;
- (void)setSpeakerIDConfidence:(int)arg1;
- (_INPBString *)sharedUserID;
- (int)speakerIDConfidence;
- (NSString *)speakerIDConfidenceAsString:(int)arg1;

@end
