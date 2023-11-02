
@interface COElectionInfo : NSObject {
    COBallot * _ballot;
    unsigned long long  _generation;
}

@property (nonatomic, copy) COBallot *ballot;
@property (nonatomic) unsigned long long generation;

- (void).cxx_destruct;
- (id)ballot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)generation;
- (unsigned long long)hash;
- (id)initWithCommand:(id)arg1;
- (id)initWithGeneration:(unsigned long long)arg1 ballot:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)leader;
- (void)setBallot:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (bool)shouldTriggerElectionForElectionInfo:(id)arg1;

@end
