
@interface SPQueryResponse : NSObject {
    unsigned long long  _kind;
    NSArray * _resultSections;
    NSString * _sessionEntityString;
    unsigned long long  _state;
    SPQueryTask * _task;
}

@property (nonatomic) unsigned long long kind;
@property (nonatomic, retain) NSArray *resultSections;
@property (nonatomic, retain) NSString *sessionEntityString;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) SPQueryTask *task;

- (void).cxx_destruct;
- (id)copy;
- (id)description;
- (id)init;
- (id)initWithTask:(id)arg1;
- (unsigned long long)kind;
- (id)resultSections;
- (id)sessionEntityString;
- (void)setKind:(unsigned long long)arg1;
- (void)setResultSections:(id)arg1;
- (void)setSessionEntityString:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTask:(id)arg1;
- (unsigned long long)state;
- (id)task;

@end
