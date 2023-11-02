
@interface PXUpNextMemoriesGenerationResult : NSObject {
    NSString * _debugInfo;
    PHFetchResult * _memories;
}

@property (nonatomic, readonly) NSString *debugInfo;
@property (nonatomic, readonly) PHFetchResult *memories;

- (void).cxx_destruct;
- (id)debugInfo;
- (id)initWithMemories:(id)arg1 debugInfo:(id)arg2;
- (id)memories;

@end
