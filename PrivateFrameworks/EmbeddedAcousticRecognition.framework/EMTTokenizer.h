
@interface EMTTokenizer : NSObject {
    _EARFormatter * _formatter;
    NSLocale * _outputLocale;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSLocale *outputLocale;

- (void).cxx_destruct;
- (id)format:(id)arg1;
- (id)format:(id)arg1 preToPostItnMap:(id)arg2;
- (id)initWithModelURL:(id)arg1;
- (id)outputLocale;

@end
