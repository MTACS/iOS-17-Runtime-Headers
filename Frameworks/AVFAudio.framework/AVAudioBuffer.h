
@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying> {
    id /* block */  _deallocator;
    void * _impl;
}

@property (nonatomic, readonly) const struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*audioBufferList;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*mutableAudioBufferList;

- (const struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)audioBufferList;
- (unsigned int)byteCapacity;
- (unsigned int)byteLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)format;
- (id)initWithFormat:(id)arg1 byteCapacity:(unsigned int)arg2;
- (id)initWithPCMFormat:(id)arg1 byteCapacity:(unsigned int)arg2 bufferListNoCopy:(const struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg3 deallocator:(id /* block */)arg4;
- (struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)mutableAudioBufferList;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setByteLength:(unsigned int)arg1;

@end
