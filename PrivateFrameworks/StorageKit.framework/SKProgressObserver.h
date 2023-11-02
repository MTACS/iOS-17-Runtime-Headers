
@interface SKProgressObserver : NSObject {
    NSMutableArray * _messages;
    NSProgress * _progress;
}

@property (nonatomic, retain) NSMutableArray *messages;
@property (nonatomic, retain) NSProgress *progress;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProgress:(id)arg1;
- (id)messages;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setMessages:(id)arg1;
- (void)setProgress:(id)arg1;

@end
