
@interface PGExhaustiveMomentLabellingQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _entityIdentifier;
    unsigned short  _entityType;
    double  _localFactoryScore;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithMomentUUID:(id)arg1 localFactoryScore:(double)arg2 meaningLabels:(id)arg3;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
