
@interface SNAudioQueueConfiguration : NSObject {
    void configureAudioQueue;
    void creationFlags;
}

@property (nonatomic, copy) id /* block */ configureAudioQueue;
@property (nonatomic) unsigned int creationFlags;

- (void).cxx_destruct;
- (id /* block */)configureAudioQueue;
- (unsigned int)creationFlags;
- (id)init;
- (id)initWithCreationFlags:(unsigned int)arg1 configureAudioQueue:(id /* block */)arg2;
- (void)setConfigureAudioQueue:(id /* block */)arg1;
- (void)setCreationFlags:(unsigned int)arg1;

@end
