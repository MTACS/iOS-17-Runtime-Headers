
@interface UPResultCandidate : NSObject {
    NSDictionary * __candidateEntitiesByStartIndex;
    NSNumber * _calibratedProbability;
    NSArray * _entities;
    NSString * _intent;
    UPModelIdentifier * _modelIdentifier;
    NSObject<SIRINLUUserDialogAct> * _task;
    double  _uncalibratedProbability;
    UPUsoSerializer * _usoSerializer;
    NSString * _utterance;
}

@property (readonly) NSDictionary *_candidateEntitiesByStartIndex;
@property (readonly, copy) NSString *annotatedString;
@property (nonatomic, readonly) double bestAvailableProbability;
@property (readonly) NSNumber *calibratedProbability;
@property (readonly) NSArray *entities;
@property (readonly) NSString *intent;
@property (nonatomic, readonly) UPModelIdentifier *modelIdentifier;
@property (readonly) double probability;
@property (nonatomic, readonly) SIRINLUEXTERNALUserParse *protobufRepresentation;
@property (readonly) UPResultRootNode *rootNodeRepresentation;
@property (readonly, copy) NSObject<SIRINLUUserDialogAct> *task;
@property (readonly) double uncalibratedProbability;
@property (readonly) UPUsoSerializer *usoSerializer;
@property (readonly) NSString *utterance;

+ (id)_buildCandidateEntitiesByStartIndex:(id)arg1;

- (void).cxx_destruct;
- (id)_candidateEntitiesByStartIndex;
- (id)_intermediateNodeRepresentations:(id)arg1;
- (id)annotatedString;
- (double)bestAvailableProbability;
- (id)calibratedProbability;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entities;
- (id)initWithUncalibratedProbability:(double)arg1 calibratedProbability:(id)arg2 utterance:(id)arg3 intent:(id)arg4 entities:(id)arg5 modelIdentifier:(id)arg6 task:(id)arg7;
- (id)intent;
- (id)modelIdentifier;
- (double)probability;
- (id)protobufRepresentation;
- (id)rootNodeRepresentation;
- (id)task;
- (double)uncalibratedProbability;
- (id)usoSerializer;
- (id)utterance;

@end
