
@protocol _INPBSetAudioSourceInCarIntent <NSObject>

@required

- (int)StringAsAudioSource:(NSString *)arg1;
- (int)StringAsRelativeAudioSourceReference:(NSString *)arg1;
- (int)audioSource;
- (NSString *)audioSourceAsString:(int)arg1;
- (bool)hasAudioSource;
- (bool)hasIntentMetadata;
- (bool)hasRelativeAudioSourceReference;
- (_INPBIntentMetadata *)intentMetadata;
- (int)relativeAudioSourceReference;
- (NSString *)relativeAudioSourceReferenceAsString:(int)arg1;
- (void)setAudioSource:(int)arg1;
- (void)setHasAudioSource:(bool)arg1;
- (void)setHasRelativeAudioSourceReference:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setRelativeAudioSourceReference:(int)arg1;

@end
