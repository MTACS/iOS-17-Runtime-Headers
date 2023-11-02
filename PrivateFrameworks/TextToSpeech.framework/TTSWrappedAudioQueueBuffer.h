
@interface TTSWrappedAudioQueueBuffer : NSObject {
    struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; } * _aqBuffer;
    id /* block */  _completionHandler;
}

@property (nonatomic) struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*aqBuffer;
@property (nonatomic, readonly) unsigned long long byteSize;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)aqBuffer;
- (unsigned long long)byteSize;
- (id /* block */)completionHandler;
- (void)setAqBuffer:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
