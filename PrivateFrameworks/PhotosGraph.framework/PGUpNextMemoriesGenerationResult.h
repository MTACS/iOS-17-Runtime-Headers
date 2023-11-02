
@interface PGUpNextMemoriesGenerationResult : NSObject {
    NSString * _debugInfo;
    NSArray * _memoryLocalIdentifiers;
}

@property (nonatomic, readonly) NSString *debugInfo;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSArray *memoryLocalIdentifiers;

- (void).cxx_destruct;
- (id)debugInfo;
- (id)dictionaryRepresentation;
- (id)initWithMemoryLocalIdentifiers:(id)arg1 debugInfo:(id)arg2;
- (id)memoryLocalIdentifiers;

@end
