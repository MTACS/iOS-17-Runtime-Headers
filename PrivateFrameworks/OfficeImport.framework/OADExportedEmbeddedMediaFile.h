
@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile {
    TSPData * _tspData;
    bool  isAudioOnly;
}

@property (nonatomic, retain) TSPData *tspData;

- (void).cxx_destruct;
- (bool)isAudioOnly;
- (void)setIsAudioOnly:(bool)arg1;
- (void)setTspData:(id)arg1;
- (id)tspData;

@end
