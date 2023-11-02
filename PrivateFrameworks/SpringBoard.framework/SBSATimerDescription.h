
@interface SBSATimerDescription : NSObject <SBSATimerDescribing> {
    double  _timeInterval;
    NSUUID * _timerDescriptionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly, copy) NSUUID *timerDescriptionIdentifier;

- (void).cxx_destruct;
- (id)_equalsBuilder:(id)arg1;
- (id)_hashBuilder;
- (id)_initWithIdentifier:(id)arg1 timeInterval:(double)arg2;
- (id)_mutableDescriptionMissingClosingAngleBracket;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithTimeInterval:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)timeInterval;
- (id)timerDescriptionIdentifier;

@end
