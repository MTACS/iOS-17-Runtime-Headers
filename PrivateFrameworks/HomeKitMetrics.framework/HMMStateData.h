
@interface HMMStateData : NSObject {
    bool  _cleanClose;
    unsigned long long  _duration;
    NSDictionary * _enterData;
    unsigned long long  _enterTime;
    NSDictionary * _exitData;
    NSString * _name;
    bool  _open;
}

@property (nonatomic, readonly) bool cleanClose;
@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly) NSDictionary *enterData;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic, readonly) NSDictionary *exitData;
@property (nonatomic, readonly) NSString *name;
@property (getter=isOpen, nonatomic, readonly) bool open;

- (void).cxx_destruct;
- (void)_exitTime:(unsigned long long)arg1 exitData:(id)arg2;
- (bool)cleanClose;
- (id)description;
- (unsigned long long)duration;
- (id)enterData;
- (unsigned long long)enterTime;
- (id)exitData;
- (void)exitTime:(unsigned long long)arg1 exitData:(id)arg2;
- (void)forceExit:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 enterTime:(unsigned long long)arg2 enterData:(id)arg3;
- (bool)isOpen;
- (id)name;
- (void)setEnterTime:(unsigned long long)arg1;

@end
