
@interface SXEmailActionSerializer : NSObject <SXActionSerializer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)URLForAction:(id)arg1 type:(long long)arg2;

@end
