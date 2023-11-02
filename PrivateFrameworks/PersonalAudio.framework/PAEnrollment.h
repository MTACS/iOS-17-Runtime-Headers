
@interface PAEnrollment : NSObject {
    PAConfiguration * _audiogramPreset;
    NSMutableDictionary * _enrollmentHandlers;
    unsigned long long  _progress;
    unsigned long long  _selectedLevel;
}

@property (nonatomic, retain) PAConfiguration *audiogramPreset;
@property (nonatomic, retain) NSMutableDictionary *enrollmentHandlers;
@property (nonatomic) unsigned long long progress;
@property (nonatomic) unsigned long long selectedLevel;

+ (id)enrollmentWithAudiogram:(id)arg1;

- (void).cxx_destruct;
- (void)addEnrollmentStepForSection:(unsigned long long)arg1 comparing:(unsigned long long)arg2 withOption:(unsigned long long)arg3 andBlock:(id /* block */)arg4;
- (void)addHandlers;
- (void)addLevelEnrollmentStepsStartingWith:(unsigned long long)arg1;
- (void)addOffEnrollmentStepComparing:(unsigned long long)arg1;
- (id)audiogramPreset;
- (id)enrollmentHandlers;
- (id)enrollmentNodeAfter:(id)arg1 withSelectedNode:(id)arg2;
- (id)init;
- (unsigned long long)progress;
- (unsigned long long)selectedLevel;
- (void)setAudiogramPreset:(id)arg1;
- (void)setEnrollmentHandlers:(id)arg1;
- (void)setProgress:(unsigned long long)arg1;
- (void)setSelectedLevel:(unsigned long long)arg1;

@end
