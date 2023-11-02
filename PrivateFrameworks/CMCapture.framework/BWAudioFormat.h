
@interface BWAudioFormat : BWFormat {
    struct opaqueCMFormatDescription { } * _audioFormatDescription;
    NSDictionary * _avAudioSettings;
}

@property (readonly) NSDictionary *audioCompressionSBPOptions;
@property (readonly) struct opaqueCMFormatDescription { }*audioFormatDescription;

+ (bool)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)arg1;
+ (id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (void)initialize;

- (id)audioCompressionSBPOptions;
- (struct opaqueCMFormatDescription { }*)audioFormatDescription;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned int)mediaType;

@end
