
@interface DYBreakpoint : NSObject <NSSecureCoding> {
    NSArray * _backtrace;
    bool  _breakAfter;
    bool  _breakBefore;
    NSMutableData * _fbufData;
    unsigned int  _fenum;
    struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; } * _function;
    int  _glError;
    NSString * _name;
    bool  _noExec;
    NSPredicate * _predicate;
    NSString * _predicateString;
    NSString * _threadName;
    int  _type;
}

@property (nonatomic, readonly, retain) NSArray *backtrace;
@property (nonatomic) bool breakAfter;
@property (nonatomic) bool breakBefore;
@property (nonatomic) unsigned int fenum;
@property (nonatomic, readonly) const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*function;
@property (nonatomic, readonly) int glError;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) bool noExec;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, copy) NSString *predicateString;
@property (nonatomic, readonly, retain) NSString *threadName;
@property (nonatomic, readonly) int type;

+ (id)keyPathsForValuesAffectingName;
+ (bool)supportsSecureCoding;

- (void)_commonInit:(int)arg1 backtrace:(id)arg2 error:(int)arg3;
- (id)_initWithPbuf:(struct Fbuf { union { void *x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; void *x2; unsigned int x3; }*)arg1 type:(int)arg2 backtrace:(id)arg3 error:(int)arg4;
- (id)_initWithType:(int)arg1 backtrace:(id)arg2 error:(int)arg3;
- (id)backtrace;
- (bool)breakAfter;
- (bool)breakBefore;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fenum;
- (const struct Function { struct CoreFunction { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; union { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_1_1_5; struct Argument { void *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; unsigned int x_6_2_4; unsigned short x_6_2_5; unsigned short x_6_2_6; } x_1_1_6; struct Argument { void *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned short x_7_2_5; unsigned short x_7_2_6; } x_1_1_7[16]; unsigned int x_1_1_8; unsigned int x_1_1_9; void *x_1_1_10; void *x_1_1_11; } x1; unsigned long long x2; unsigned long long x3; unsigned long long *x4; unsigned short x5; unsigned short x6; int x7; void *x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; struct Function {} *x13; void *x14; }*)function;
- (int)glError;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (bool)noExec;
- (id)predicate;
- (id)predicateString;
- (void)setBreakAfter:(bool)arg1;
- (void)setBreakBefore:(bool)arg1;
- (void)setFenum:(unsigned int)arg1;
- (void)setNoExec:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPredicateString:(id)arg1;
- (id)threadName;
- (int)type;

@end
