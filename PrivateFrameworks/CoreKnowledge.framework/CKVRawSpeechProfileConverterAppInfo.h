
@interface CKVRawSpeechProfileConverterAppInfo : NSObject <CKVRawSpeechProfileConverter> {
    KVItemBuilder * _builder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)speechCategoryId;
- (id)vocabularyItemFromSpeechWords:(id)arg1 metadata:(id)arg2 speechNamespace:(id)arg3 error:(id*)arg4;

@end
