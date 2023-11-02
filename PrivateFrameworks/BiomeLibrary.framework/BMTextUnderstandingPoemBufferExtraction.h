
@interface BMTextUnderstandingPoemBufferExtraction : BMEventBase <BMStoreData> {
    double  _confidenceScore;
    NSString * _contactIdentifier;
    bool  _hasConfidenceScore;
    bool  _hasIsCoref;
    NSString * _identifier;
    bool  _isCoref;
    int  _role;
    NSString * _text;
    int  _type;
}

@property (nonatomic, readonly) double confidenceScore;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfidenceScore;
@property (nonatomic) bool hasIsCoref;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCoref;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (double)confidenceScore;
- (id)contactIdentifier;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasConfidenceScore;
- (bool)hasIsCoref;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithType:(int)arg1 text:(id)arg2 identifier:(id)arg3 confidenceScore:(id)arg4 contactIdentifier:(id)arg5 role:(int)arg6 isCoref:(id)arg7;
- (bool)isCoref;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)role;
- (id)serialize;
- (void)setHasConfidenceScore:(bool)arg1;
- (void)setHasIsCoref:(bool)arg1;
- (id)text;
- (int)type;
- (void)writeTo:(id)arg1;

@end
