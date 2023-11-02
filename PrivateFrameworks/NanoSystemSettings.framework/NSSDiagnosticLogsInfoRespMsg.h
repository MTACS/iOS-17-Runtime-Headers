
@interface NSSDiagnosticLogsInfoRespMsg : PBCodable <NSCopying> {
    NSMutableArray * _filesByCategorys;
    NSMutableArray * _paths;
}

@property (nonatomic, retain) NSMutableArray *filesByCategorys;
@property (nonatomic, retain) NSMutableArray *paths;

+ (Class)filesByCategoryType;
+ (Class)pathsType;

- (void).cxx_destruct;
- (void)addFilesByCategory:(id)arg1;
- (void)addPaths:(id)arg1;
- (void)clearFilesByCategorys;
- (void)clearPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filesByCategoryAtIndex:(unsigned long long)arg1;
- (id)filesByCategorys;
- (unsigned long long)filesByCategorysCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paths;
- (id)pathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (bool)readFrom:(id)arg1;
- (void)setFilesByCategorys:(id)arg1;
- (void)setPaths:(id)arg1;
- (void)writeTo:(id)arg1;

@end
