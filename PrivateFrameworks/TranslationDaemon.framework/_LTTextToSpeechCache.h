
@interface _LTTextToSpeechCache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _cacheQueue;
}

- (void).cxx_destruct;
- (id)audioDataForKey:(id)arg1;
- (void)cacheAudioData:(id)arg1 forKey:(id)arg2;
- (void)clear;
- (id)init;

@end
