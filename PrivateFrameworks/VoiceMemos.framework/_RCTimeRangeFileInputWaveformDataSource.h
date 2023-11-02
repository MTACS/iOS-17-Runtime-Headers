
@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource {
    bool  _isDecomposedFragment;
}

@property (nonatomic) bool isDecomposedFragment;

- (bool)isDecomposedFragment;
- (void)saveGeneratedWaveformIfNecessary;
- (void)setIsDecomposedFragment:(bool)arg1;

@end
