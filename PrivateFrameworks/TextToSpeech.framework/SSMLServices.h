
@interface SSMLServices : NSObject {
    SSMLServicesWrapper * _conversionWrapper;
}

@property (nonatomic, retain) SSMLServicesWrapper *conversionWrapper;

+ (id)shared;

- (void).cxx_destruct;
- (id)conversionWrapper;
- (id)convertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forSSML:(id)arg2;
- (id)generateSSMLFromAVSpeechUtterance:(id)arg1;
- (id)generateSSMLFromPlainTalkString:(id)arg1;
- (id)generateSSMLFromString:(id)arg1;
- (bool)isSSMLValid:(id)arg1;
- (id)parseSSMLToAVSpeechUtterances:(id)arg1;
- (id)parseSSMLToPlainTalk:(id)arg1;
- (id)parseSSMLToPlainText:(id)arg1;
- (void)setConversionWrapper:(id)arg1;

@end
