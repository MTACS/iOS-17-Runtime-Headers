
@interface BKHIDEventRecognizerEngine : NSObject <BKHIDEventProcessor> {
    NSMutableArray * _blocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _recognizers;
}

@property (nonatomic, retain) NSMutableArray *blocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *recognizers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addRecognizer:(id)arg1 recognitionBlock:(id /* block */)arg2;
- (id)blocks;
- (id)init;
- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 sender:(id)arg2 dispatcher:(id)arg3;
- (id)recognizers;
- (void)removeRecognizer:(id)arg1;
- (void)setBlocks:(id)arg1;
- (void)setRecognizers:(id)arg1;

@end
