
@interface ATAudioSessionPropertyManager : NSObject {
    ATAudioSessionClientImpl * mAsClientImpl;
}

- (void).cxx_destruct;
- (int)GetProperty:(unsigned int)arg1 size:(unsigned int*)arg2 data:(void*)arg3;
- (int)SetProperty:(unsigned int)arg1 size:(unsigned int)arg2 data:(const void*)arg3;
- (id)initWithATAudioSessionClientImpl:(id)arg1;

@end
