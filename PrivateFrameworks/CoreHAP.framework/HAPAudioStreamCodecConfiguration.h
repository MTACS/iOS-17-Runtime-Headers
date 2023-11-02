
@interface HAPAudioStreamCodecConfiguration : NSObject <HAPTLVProtocol, NSCopying> {
    HAPAudioStreamCodecParameters * _codecParameters;
    HAPAudioCodecTypeWrapper * _codecType;
}

@property (nonatomic, retain) HAPAudioStreamCodecParameters *codecParameters;
@property (nonatomic, retain) HAPAudioCodecTypeWrapper *codecType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)codecParameters;
- (id)codecType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithCodecType:(id)arg1 codecParameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setCodecParameters:(id)arg1;
- (void)setCodecType:(id)arg1;

@end
