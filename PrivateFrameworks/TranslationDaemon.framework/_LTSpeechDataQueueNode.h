
@interface _LTSpeechDataQueueNode : NSObject {
    NSData * _data;
    _LTSpeechDataQueueNode * _next;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) _LTSpeechDataQueueNode *next;

- (void).cxx_destruct;
- (id)data;
- (id)next;
- (void)setData:(id)arg1;
- (void)setNext:(id)arg1;

@end
