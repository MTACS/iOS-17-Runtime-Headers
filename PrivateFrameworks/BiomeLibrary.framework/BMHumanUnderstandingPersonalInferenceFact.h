
@interface BMHumanUnderstandingPersonalInferenceFact : BMEventBase <BMStoreData> {
    NSString * _objectAlias;
    NSString * _objectID;
    NSString * _predicateID;
    NSString * _subjectAlias;
    NSString * _subjectID;
    NSArray * _subjectIsa;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *objectAlias;
@property (nonatomic, readonly) NSString *objectID;
@property (nonatomic, readonly) NSString *predicateID;
@property (nonatomic, readonly) NSString *subjectAlias;
@property (nonatomic, readonly) NSString *subjectID;
@property (nonatomic, readonly) NSArray *subjectIsa;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_subjectIsaJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSubjectID:(id)arg1 subjectAlias:(id)arg2 subjectIsa:(id)arg3 predicateID:(id)arg4 objectID:(id)arg5 objectAlias:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)objectAlias;
- (id)objectID;
- (id)predicateID;
- (id)serialize;
- (id)subjectAlias;
- (id)subjectID;
- (id)subjectIsa;
- (void)writeTo:(id)arg1;

@end
