
@interface AMDDODMLAttachmentProcessor : NSObject {
    NSMutableDictionary * _downSampleAttachments;
    NSMutableDictionary * _hashMapAttachments;
    NSMutableDictionary * _negSampleAttachements;
    NSData * _weightAttachment;
}

- (void).cxx_destruct;
- (id)downSampleDictionaryForKey:(id)arg1;
- (id)getURLFromURLArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)hashMapForKey:(id)arg1;
- (id)initWithAttachmentURLs:(id)arg1 withInstructions:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)initWithHashMapDictionary:(id)arg1 withDownSampleDictionary:(id)arg2 withNegSampleDictionary:(id)arg3;
- (id)negSampleArrayForKey:(id)arg1;
- (id)readDownSampleDictionary:(id)arg1 withAttachments:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)readDownSampleDictionaryBytes:(id)arg1 withAttachments:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)readHashMapDictionary:(id)arg1 withAttachments:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)readHashMapDictionaryBytes:(id)arg1 withAttachments:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)readNegativeSampleArray:(id)arg1 withAttachments:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)readNegativeSampleArrayBytes:(id)arg1 withAttachments:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)readWeightsArrayBytes:(id)arg1 withAttachments:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)setHashMap:(id)arg1 forKey:(id)arg2;
- (id)weightsArray;

@end
