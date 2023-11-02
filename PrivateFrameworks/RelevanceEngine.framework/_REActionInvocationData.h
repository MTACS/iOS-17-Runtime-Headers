
@interface _REActionInvocationData : NSObject {
    unsigned long long  _count;
    NSDate * _date;
    bool  _remote;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool remote;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)date;
- (bool)remote;
- (void)setCount:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setRemote:(bool)arg1;

@end
