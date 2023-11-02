
@interface JFXSharedMediaDataReaderManager : NSObject {
    <JFXPlayableElement> * _playableElement;
    JFXARMetadataMediaReader * _weakSharedARMetadataReader;
    JFXDepthDataMediaReader * _weakSharedDepthDataReader;
}

@property (nonatomic, retain) <JFXPlayableElement> *playableElement;
@property (nonatomic, readonly) JFXARMetadataMediaReader *sharedARMetadataReader;
@property (nonatomic, readonly) JFXDepthDataMediaReader *sharedDepthDataReader;
@property (nonatomic) JFXARMetadataMediaReader *weakSharedARMetadataReader;
@property (nonatomic) JFXDepthDataMediaReader *weakSharedDepthDataReader;

- (void).cxx_destruct;
- (id)initWithPlayableElement:(id)arg1;
- (id)playableElement;
- (void)setPlayableElement:(id)arg1;
- (void)setWeakSharedARMetadataReader:(id)arg1;
- (void)setWeakSharedDepthDataReader:(id)arg1;
- (id)sharedARMetadataReader;
- (id)sharedDepthDataReader;
- (id)weakSharedARMetadataReader;
- (id)weakSharedDepthDataReader;

@end
