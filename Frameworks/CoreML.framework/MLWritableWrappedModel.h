
@interface MLWritableWrappedModel : MLWrappedModel <MLWritable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)wrapperAroundWritableModel:(id)arg1;

- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
