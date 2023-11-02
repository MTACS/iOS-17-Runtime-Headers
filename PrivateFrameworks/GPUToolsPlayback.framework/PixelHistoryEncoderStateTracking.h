
@interface PixelHistoryEncoderStateTracking : NSObject {
    unsigned int  _encoderFunctionIndex;
    NSMutableDictionary * _encoderStateFunctionIndexes;
    NSMutableDictionary * _filteredGenerationOptions;
    unsigned int  _lastInterestingFunctionIndex;
}

@property (nonatomic) unsigned int encoderFunctionIndex;
@property (nonatomic, retain) NSMutableDictionary *encoderStateFunctionIndexes;
@property (nonatomic, retain) NSMutableDictionary *filteredGenerationOptions;
@property (nonatomic) unsigned int lastInterestingFunctionIndex;

- (void).cxx_destruct;
- (unsigned int)encoderFunctionIndex;
- (id)encoderStateFunctionIndexes;
- (id)filteredGenerationOptions;
- (unsigned int)lastInterestingFunctionIndex;
- (void)setEncoderFunctionIndex:(unsigned int)arg1;
- (void)setEncoderStateFunctionIndexes:(id)arg1;
- (void)setFilteredGenerationOptions:(id)arg1;
- (void)setLastInterestingFunctionIndex:(unsigned int)arg1;

@end
