
@interface TVPMediaItemSkipInfo : NSObject {
    double  _duration;
    NSString * _localizedTitle;
    NSString * _skipIntroReportingType;
    double  _start;
    double  _target;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSString *skipIntroReportingType;
@property (nonatomic, readonly) double start;
@property (nonatomic, readonly) double target;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_typeDescription;
- (id)description;
- (double)duration;
- (id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 localizedTitle:(id)arg5 skipIntroReportingType:(id)arg6;
- (id)localizedTitle;
- (id)skipIntroReportingType;
- (double)start;
- (double)target;
- (unsigned long long)type;

@end
