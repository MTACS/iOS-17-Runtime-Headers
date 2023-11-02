
@interface CKVRawSpeechProfileWord : NSObject {
    NSString * _orthography;
    long long  _tagType;
    NSString * _tagValue;
}

@property (nonatomic, readonly) NSString *orthography;
@property (nonatomic, readonly) long long tagType;
@property (nonatomic, readonly) NSString *tagValue;

- (void).cxx_destruct;
- (id)_extractOrthographyFromSpeechWord:(id)arg1;
- (id)_extractTagFromSpeechWord:(id)arg1;
- (id)init;
- (id)initWithSpeechWordDictionary:(id)arg1;
- (id)orthography;
- (long long)tagType;
- (id)tagValue;

@end
