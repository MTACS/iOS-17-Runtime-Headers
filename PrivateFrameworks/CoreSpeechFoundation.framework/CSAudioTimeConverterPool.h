
@interface CSAudioTimeConverterPool : NSObject {
    NSMutableDictionary * _pool;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *pool;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getAudioTimeConverterWithAudioStreamId:(unsigned long long)arg1;
- (id)converterForAudioStreamId:(unsigned long long)arg1;
- (id)defaultConverter;
- (id)init;
- (id)pool;
- (id)queue;
- (void)setPool:(id)arg1;
- (void)setQueue:(id)arg1;

@end
