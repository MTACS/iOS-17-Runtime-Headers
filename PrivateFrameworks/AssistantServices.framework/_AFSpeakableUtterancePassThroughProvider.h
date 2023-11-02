
@interface _AFSpeakableUtterancePassThroughProvider : NSObject <AFSpeakableNamespaceProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)stringForExpression:(id)arg1;
- (id)stringForExpression:(id)arg1 containsPrivacySensitiveContents:(bool*)arg2;

@end
