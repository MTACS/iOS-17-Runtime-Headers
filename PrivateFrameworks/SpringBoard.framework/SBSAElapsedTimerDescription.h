
@interface SBSAElapsedTimerDescription : SBSATimerDescription <SBSAElapsedTimerDescribing> {
    bool  _elapsed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isElapsed, nonatomic, readonly) bool elapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly, copy) NSUUID *timerDescriptionIdentifier;

- (id)_equalsBuilder:(id)arg1;
- (id)_hashBuilder;
- (id)_mutableDescriptionMissingEndAngleBracket;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initElapsedTimerDescriptionWithDescription:(id)arg1;
- (bool)isElapsed;

@end
