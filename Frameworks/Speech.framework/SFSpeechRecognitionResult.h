
@interface SFSpeechRecognitionResult : NSObject <NSCopying, NSSecureCoding, SRSampling> {
    SFTranscription * _bestTranscription;
    bool  _final;
    SFTranscription * _rawTranscription;
    NSArray * _rawTranscriptions;
    SFSpeechRecognitionMetadata * _speechRecognitionMetadata;
    NSArray * _transcriptions;
}

@property (nonatomic, readonly, copy) SFTranscription *bestTranscription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinal, nonatomic, readonly) bool final;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) SFTranscription *rawTranscription;
@property (nonatomic, readonly, copy) NSArray *rawTranscriptions;
@property (nonatomic, readonly) SFSpeechRecognitionMetadata *speechRecognitionMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *transcriptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBestTranscription:(id)arg1 rawTranscription:(id)arg2 final:(bool)arg3 speechRecognitionMetadata:(id)arg4;
- (id)bestTranscription;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFinal;
- (id)rawTranscription;
- (id)rawTranscriptions;
- (id)speechRecognitionMetadata;
- (id)transcriptions;

@end
