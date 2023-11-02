
@interface BMSiriAnnotatedEntity : BMEventBase <BMStoreData> {
    NSString * _ID;
    NSArray * _annotations;
    NSString * _appBundleID;
    NSData * _data;
    NSString * _dataType;
    BMSiriAnnotatedEntityGroupIdentifier * _group;
    bool  _hasSaliencyComputedAt;
    bool  _hasSaliencyScore;
    unsigned long long  _saliencyComputedAt;
    double  _saliencyScore;
    NSData * _usoEntity;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSArray *annotations;
@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *dataType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMSiriAnnotatedEntityGroupIdentifier *group;
@property (nonatomic) bool hasSaliencyComputedAt;
@property (nonatomic) bool hasSaliencyScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long saliencyComputedAt;
@property (nonatomic, readonly) double saliencyScore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *usoEntity;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)ID;
- (id)_annotationsJSONArray;
- (id)annotations;
- (id)appBundleID;
- (id)data;
- (id)dataType;
- (unsigned int)dataVersion;
- (id)description;
- (id)group;
- (bool)hasSaliencyComputedAt;
- (bool)hasSaliencyScore;
- (id)initByReadFrom:(id)arg1;
- (id)initWithID:(id)arg1 appBundleID:(id)arg2 usoEntity:(id)arg3 dataType:(id)arg4 data:(id)arg5 group:(id)arg6 annotations:(id)arg7 saliencyScore:(id)arg8 saliencyComputedAt:(id)arg9;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned long long)saliencyComputedAt;
- (double)saliencyScore;
- (id)serialize;
- (void)setHasSaliencyComputedAt:(bool)arg1;
- (void)setHasSaliencyScore:(bool)arg1;
- (id)usoEntity;
- (void)writeTo:(id)arg1;

@end
