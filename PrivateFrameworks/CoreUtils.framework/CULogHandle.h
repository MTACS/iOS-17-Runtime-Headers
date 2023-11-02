
@interface CULogHandle : NSObject {
    NSString * _categoryName;
    NSString * _label;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucatPtr;
}

@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logFlags:(unsigned int)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3 logFlags:(unsigned int)arg4;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)ulog:(int)arg1 message:(id)arg2;
- (void)ulogf:(int)arg1 format:(id)arg2;
- (void)ulogv:(int)arg1 format:(id)arg2 args:(char *)arg3;

@end
