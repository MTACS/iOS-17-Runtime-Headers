
@interface GDKnosisResult : NSObject <NSSecureCoding> {
    NSArray * _answers;
    GDKnosisDebug * _debug;
    NSString * _errorMessage;
    bool  _hasMoreAnswers;
    NSString * _kgq;
    NSNumber * _limit;
    NSNumber * _offset;
    NSString * _query;
    unsigned long long  _status;
}

@property (nonatomic, readonly, copy) NSArray *answers;
@property (nonatomic, readonly, copy) GDKnosisDebug *debug;
@property (nonatomic, readonly, copy) NSString *errorMessage;
@property (nonatomic, readonly) bool hasMoreAnswers;
@property (nonatomic, readonly, copy) NSString *kgq;
@property (nonatomic, readonly, copy) NSNumber *limit;
@property (nonatomic, readonly, copy) NSNumber *offset;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly) unsigned long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)answers;
- (id)debug;
- (void)encodeWithCoder:(id)arg1;
- (id)errorMessage;
- (bool)hasMoreAnswers;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1 kgq:(id)arg2 status:(unsigned long long)arg3 answers:(id)arg4 errorMessage:(id)arg5 limit:(id)arg6 offset:(id)arg7 hasMoreAnswers:(bool)arg8 debug:(id)arg9;
- (id)kgq;
- (id)limit;
- (id)offset;
- (id)query;
- (unsigned long long)status;

@end
