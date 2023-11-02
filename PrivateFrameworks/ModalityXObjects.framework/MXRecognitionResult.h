
@interface MXRecognitionResult : PBCodable <NSCopying> {
    NSMutableArray * _choiceAlignments;
    MXRecognitionSausage * _postItn;
    NSMutableArray * _postItnNbestChoices;
    MXRecognitionSausage * _preItn;
    NSMutableArray * _preItnNbestChoices;
    NSMutableArray * _preItnTokenToPostItnCharAlignments;
}

@property (nonatomic, retain) NSMutableArray *choiceAlignments;
@property (nonatomic, readonly) bool hasPostItn;
@property (nonatomic, readonly) bool hasPreItn;
@property (nonatomic, retain) MXRecognitionSausage *postItn;
@property (nonatomic, retain) NSMutableArray *postItnNbestChoices;
@property (nonatomic, retain) MXRecognitionSausage *preItn;
@property (nonatomic, retain) NSMutableArray *preItnNbestChoices;
@property (nonatomic, retain) NSMutableArray *preItnTokenToPostItnCharAlignments;

+ (Class)choiceAlignmentsType;
+ (Class)postItnNbestChoicesType;
+ (Class)preItnNbestChoicesType;
+ (Class)preItnTokenToPostItnCharAlignmentType;

- (void).cxx_destruct;
- (void)addChoiceAlignments:(id)arg1;
- (void)addPostItnNbestChoices:(id)arg1;
- (void)addPreItnNbestChoices:(id)arg1;
- (void)addPreItnTokenToPostItnCharAlignment:(id)arg1;
- (id)choiceAlignments;
- (id)choiceAlignmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)choiceAlignmentsCount;
- (void)clearChoiceAlignments;
- (void)clearPostItnNbestChoices;
- (void)clearPreItnNbestChoices;
- (void)clearPreItnTokenToPostItnCharAlignments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPostItn;
- (bool)hasPreItn;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)postItn;
- (id)postItnNbestChoices;
- (id)postItnNbestChoicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)postItnNbestChoicesCount;
- (id)preItn;
- (id)preItnNbestChoices;
- (id)preItnNbestChoicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preItnNbestChoicesCount;
- (id)preItnTokenToPostItnCharAlignmentAtIndex:(unsigned long long)arg1;
- (id)preItnTokenToPostItnCharAlignments;
- (unsigned long long)preItnTokenToPostItnCharAlignmentsCount;
- (bool)readFrom:(id)arg1;
- (void)setChoiceAlignments:(id)arg1;
- (void)setPostItn:(id)arg1;
- (void)setPostItnNbestChoices:(id)arg1;
- (void)setPreItn:(id)arg1;
- (void)setPreItnNbestChoices:(id)arg1;
- (void)setPreItnTokenToPostItnCharAlignments:(id)arg1;
- (void)writeTo:(id)arg1;

@end
