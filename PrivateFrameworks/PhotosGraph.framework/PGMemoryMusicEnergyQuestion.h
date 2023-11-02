
@interface PGMemoryMusicEnergyQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _entityIdentifier;
    double  _localFactoryScore;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithMemory:(id)arg1 song:(id)arg2 localFactoryScore:(double)arg3;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
