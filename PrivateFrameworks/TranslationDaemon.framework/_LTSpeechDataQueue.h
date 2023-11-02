
@interface _LTSpeechDataQueue : NSObject {
    unsigned long long  _currentFrames;
    _LTSpeechDataQueueNode * _head;
    unsigned long long  _maxFrames;
    _LTSpeechDataQueueNode * _tail;
}

- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)arg1;
- (void)consumeAll:(id /* block */)arg1;
- (id)initForSeconds:(double)arg1;

@end
