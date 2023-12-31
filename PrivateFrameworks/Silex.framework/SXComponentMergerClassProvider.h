
@interface SXComponentMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (Class)classForObject:(id)arg1 specVersion:(id)arg2;

@end
