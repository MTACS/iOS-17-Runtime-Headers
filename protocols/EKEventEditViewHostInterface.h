
@protocol EKEventEditViewHostInterface

@required

- (void)didCompleteWithAction:(long long)arg1 oldToNewObjectIDMap:(NSDictionary *)arg2 waitUntilTimestamp:(CADInMemoryChangeTimestamp *)arg3 serializedDictionary:(NSDictionary *)arg4 objectIDToChangeSetDictionaryMap:(NSDictionary *)arg5 objectIDToPersistentDictionaryMap:(NSDictionary *)arg6 eventConstraints:(NSData *)arg7;
- (void)requestPresentViewWithName:(NSString *)arg1 viewID:(NSString *)arg2 presentationStyle:(long long)arg3;

@end
