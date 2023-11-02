
@interface CMSWOLFSummary : NSObject <NSCopying, NSSecureCoding> {
    double  fBackstrokeSWOLF;
    double  fBreaststrokeSWOLF;
    double  fButterflySWOLF;
    NSDate * fEndDate;
    double  fFreestyleSWOLF;
    double  fSWOLF;
    NSUUID * fSessionId;
    NSUUID * fSourceId;
    NSDate * fStartDate;
}

@property (nonatomic, readonly) double SWOLF;
@property (nonatomic, readonly) double backstrokeSWOLF;
@property (nonatomic, readonly) double breaststrokeSWOLF;
@property (nonatomic, readonly) double butterflySWOLF;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double freestyleSWOLF;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSData *startDate;

+ (bool)supportsSecureCoding;

- (double)SWOLF;
- (double)backstrokeSWOLF;
- (double)breaststrokeSWOLF;
- (double)butterflySWOLF;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (double)freestyleSWOLF;
- (id)initWithCLSWOLFSummary:(const struct CLSWOLFSummary { double x1; double x2; unsigned char x3[16]; unsigned char x4[16]; double x5; double x6; double x7; double x8; double x9; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 SWOLF:(double)arg5 freestyleSWOLF:(double)arg6 backstrokeSWOLF:(double)arg7 breaststrokeSWOLF:(double)arg8 butterflySWOLF:(double)arg9;
- (id)sessionId;
- (id)sourceId;
- (id)startDate;

@end
