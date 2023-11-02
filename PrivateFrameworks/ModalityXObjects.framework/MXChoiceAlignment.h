
@interface MXChoiceAlignment : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _postItnChoiceIndices;
    NSMutableArray * _preItnTokenToPostItnCharAlignments;
}

@property (nonatomic, readonly) int*postItnChoiceIndices;
@property (nonatomic, readonly) unsigned long long postItnChoiceIndicesCount;
@property (nonatomic, retain) NSMutableArray *preItnTokenToPostItnCharAlignments;

+ (Class)preItnTokenToPostItnCharAlignmentsType;

- (void).cxx_destruct;
- (void)addPostItnChoiceIndices:(int)arg1;
- (void)addPreItnTokenToPostItnCharAlignments:(id)arg1;
- (void)clearPostItnChoiceIndices;
- (void)clearPreItnTokenToPostItnCharAlignments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int*)postItnChoiceIndices;
- (int)postItnChoiceIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)postItnChoiceIndicesCount;
- (id)preItnTokenToPostItnCharAlignments;
- (id)preItnTokenToPostItnCharAlignmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preItnTokenToPostItnCharAlignmentsCount;
- (bool)readFrom:(id)arg1;
- (void)setPostItnChoiceIndices:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPreItnTokenToPostItnCharAlignments:(id)arg1;
- (void)writeTo:(id)arg1;

@end
