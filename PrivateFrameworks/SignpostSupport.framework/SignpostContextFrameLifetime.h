
@interface SignpostContextFrameLifetime : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata> {
    SignpostContextInfo * _contextInfo;
    SignpostFrameLifetimeInterval * _parentFrameLifetime;
}

@property (nonatomic, readonly) <SignpostSupportTimeInterval> *contextGlitchInterval;
@property (nonatomic, readonly) SignpostContextInfo *contextInfo;
@property (nonatomic, readonly) unsigned int frameSeed;
@property (nonatomic, readonly) SignpostFrameLifetimeInterval *parentFrameLifetime;

- (void).cxx_destruct;
- (id)contextGlitchInterval;
- (id)contextInfo;
- (unsigned int)frameSeed;
- (id)initWithFrameLifetime:(id)arg1 contextInfo:(id)arg2;
- (id)parentFrameLifetime;

@end
