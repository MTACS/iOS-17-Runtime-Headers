
@interface CNNameStringTokenizer : NSObject {
    CNUnfairLock * _lock;
    NSObject<OS_dispatch_queue> * _syncQueue;
    struct __CFStringTokenizer { } * _tokenizer;
}

@property (nonatomic, readonly) CNUnfairLock *lock;
@property (nonatomic, readonly) struct __CFStringTokenizer { }*tokenizer;

+ (void)setInferredNameOrder:(long long*)arg1 toTokenizerNameOrder:(int)arg2;
+ (id)tokenizeNameString:(id)arg1;
+ (id)tokenizeNameString:(id)arg1 usingLocale:(id)arg2 inferredNameOrder:(long long*)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)lock;
- (id)tokenizeNameString:(id)arg1 inferredNameOrder:(long long*)arg2;
- (struct __CFStringTokenizer { }*)tokenizer;

@end
