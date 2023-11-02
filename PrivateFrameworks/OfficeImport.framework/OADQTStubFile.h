
@interface OADQTStubFile : OADEmbeddedMediaFile {
    bool  isAudioOnly;
}

- (id)description;
- (bool)isAudioOnly;
- (void)setIsAudioOnly:(bool)arg1;

@end
