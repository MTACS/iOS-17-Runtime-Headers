
@interface HMMTRFileManager : HMFObject <HMMTRFileManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (bool)writeDictionary:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

@end
