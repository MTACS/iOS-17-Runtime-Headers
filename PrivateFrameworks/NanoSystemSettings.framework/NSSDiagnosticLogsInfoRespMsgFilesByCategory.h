
@interface NSSDiagnosticLogsInfoRespMsgFilesByCategory : PBCodable <NSCopying> {
    NSString * _directoryPath;
    NSMutableArray * _filePaths;
    int  _filesType;
}

@property (nonatomic, retain) NSString *directoryPath;
@property (nonatomic, retain) NSMutableArray *filePaths;
@property (nonatomic) int filesType;

+ (Class)filePathsType;

- (void).cxx_destruct;
- (int)StringAsFilesType:(id)arg1;
- (void)addFilePaths:(id)arg1;
- (void)clearFilePaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directoryPath;
- (id)filePaths;
- (id)filePathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filePathsCount;
- (int)filesType;
- (id)filesTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setFilePaths:(id)arg1;
- (void)setFilesType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
