
@interface AXProfileEntry : NSObject {
    NSString * _appName;
    long long  _attribute;
    double  _duration;
    int  _pid;
    unsigned long long  _type;
    struct { 
        unsigned long long elementOrHash; 
        unsigned long long elementID; 
    }  _uid;
    unsigned long long  _valueHash;
    unsigned long long  _valueSize;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic) long long attribute;
@property (nonatomic) double duration;
@property (nonatomic) int pid;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } uid;
@property (nonatomic) unsigned long long valueHash;
@property (nonatomic) unsigned long long valueSize;

- (void).cxx_destruct;
- (id)appName;
- (long long)attribute;
- (id)description;
- (double)duration;
- (int)pid;
- (void)setAppName:(id)arg1;
- (void)setAttribute:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setPid:(int)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUid:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setValueHash:(unsigned long long)arg1;
- (void)setValueSize:(unsigned long long)arg1;
- (unsigned long long)type;
- (struct { unsigned long long x1; unsigned long long x2; })uid;
- (unsigned long long)valueHash;
- (unsigned long long)valueSize;

@end
