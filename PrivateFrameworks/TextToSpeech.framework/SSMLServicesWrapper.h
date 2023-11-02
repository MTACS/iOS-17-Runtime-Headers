
@interface SSMLServicesWrapper : NSObject {
    SSMLRangeConverterInternal * _converter;
    SSMLParserWrapperInternal * _underlyingObject;
}

@property (nonatomic, retain) SSMLRangeConverterInternal *converter;
@property (nonatomic, readonly) SSMLParserWrapperInternal *underlyingObject;

- (void).cxx_destruct;
- (id)convertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forSSML:(id)arg2;
- (id)converter;
- (id)generateSSMLFromAVSpeechUtterance:(id)arg1;
- (id)generateSSMLFromPlainTalkString:(id)arg1;
- (id)generateSSMLFromString:(id)arg1;
- (id)init;
- (id)parseSSMLToAVSpeechUtterances:(id)arg1;
- (id)parseSSMLToPlainTalk:(id)arg1;
- (id)parseSSMLToPlainText:(id)arg1;
- (void)setConverter:(id)arg1;
- (id)underlyingObject;

@end
