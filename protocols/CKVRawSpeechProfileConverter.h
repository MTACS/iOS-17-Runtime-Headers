
@protocol CKVRawSpeechProfileConverter <NSObject>

@required

- (NSString *)speechCategoryId;
- (KVItem *)vocabularyItemFromSpeechWords:(NSArray *)arg1 metadata:(CKVRawSpeechProfileEntityMetadata *)arg2 speechNamespace:(NSString *)arg3 error:(id*)arg4;

@end
