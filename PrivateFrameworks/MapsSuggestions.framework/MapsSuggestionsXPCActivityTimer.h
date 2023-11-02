
@interface MapsSuggestionsXPCActivityTimer : MapsSuggestionsBaseTrigger <MapsSuggestionsTimer> {
    NSString * _activityIdentifier;
    id /* block */  _block;
    unsigned long long  _estimatedDownloadInBytes;
    unsigned long long  _estimatedUploadInBytes;
    NSDate * _firesAt;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)description;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)arg1 estinatedDownload:(unsigned long long)arg2 estinatedUpload:(unsigned long long)arg3 queue:(id)arg4 block:(id /* block */)arg5;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)objectForJSON;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg2;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1 repeatAfter:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg2 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg3;
- (void)scheduleWithTimeInterval:(double)arg1 leeway:(double)arg2;
- (void)scheduleWithTimeInterval:(double)arg1 repeatAfter:(double)arg2 leeway:(double)arg3;
- (void)unschedule;

@end
