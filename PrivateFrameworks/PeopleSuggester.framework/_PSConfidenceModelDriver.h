
@interface _PSConfidenceModelDriver : NSObject {
    NSMutableDictionary * _confidenceModelDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *confidenceModelDictionary;

+ (id)defaultArchivePath;
+ (void)deleteArchiveFile;

- (void).cxx_destruct;
- (bool)addEventForModel:(id)arg1 forUseCaseKey:(id)arg2 event:(id)arg3;
- (id)confidenceModelDictionary;
- (double)getConfidenceForModel:(id)arg1 forUseCaseKey:(id)arg2;
- (id)getDictionaryFromArchiveAtPath:(id)arg1;
- (id)getOrMakeConfidenceModelDictionary;
- (id)init;
- (bool)registerModelKey:(id)arg1 forUseCaseKey:(id)arg2 confidenceWindowSize:(int)arg3 minimumInstanceCount:(int)arg4;
- (void)setConfidenceModelDictionary:(id)arg1;
- (void)writeArchive:(id)arg1 toFilePath:(id)arg2;
- (void)writeArchiveFromDict:(id)arg1;

@end
