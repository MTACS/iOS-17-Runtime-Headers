
@interface PFLBackgroundRunner : HMFObject <HMFLogging, _DASExtensionRunner> {
    HMIDESBackgroundTask * _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) HMIDESBackgroundTask *task;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)arrayForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4;
- (bool)dictionaryForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4;
- (id)getAttachmentFromRecipe:(id)arg1 name:(id)arg2;
- (id)init;
- (bool)numberForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4;
- (bool)prepareForActivity:(id)arg1;
- (id)runSession:(id)arg1 jsonResult:(id*)arg2 error:(id*)arg3;
- (void)setTask:(id)arg1;
- (unsigned char)start;
- (void)stop;
- (bool)stringForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4;
- (id)task;

@end
