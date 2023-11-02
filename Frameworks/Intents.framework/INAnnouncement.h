
@interface INAnnouncement : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _speechDataTranscription;
    NSURL * _speechDataURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *speechDataTranscription;
@property (nonatomic, readonly, copy) NSURL *speechDataURL;
@property (nonatomic, readonly, copy) NSNumber *startTime;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechDataURL:(id)arg1 identifier:(id)arg2;
- (id)initWithSpeechDataURL:(id)arg1 identifier:(id)arg2 speechDataTranscription:(id)arg3;
- (id)initWithSpeechDataURL:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)speechDataTranscription;
- (id)speechDataURL;
- (id)startTime;

@end
