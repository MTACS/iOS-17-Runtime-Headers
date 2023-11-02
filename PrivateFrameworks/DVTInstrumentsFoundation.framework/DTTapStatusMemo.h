
@interface DTTapStatusMemo : DTTapMemo {
    NSDictionary * _info;
    NSString * _notice;
    unsigned int  _status;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSDictionary *info;
@property (nonatomic, retain) NSString *notice;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)info;
- (id)initWithStatus:(unsigned int)arg1 notice:(id)arg2;
- (id)initWithStatus:(unsigned int)arg1 notice:(id)arg2 info:(id)arg3;
- (id)initWithStatus:(unsigned int)arg1 notice:(id)arg2 info:(id)arg3 timestamp:(unsigned long long)arg4;
- (id)notice;
- (void)setInfo:(id)arg1;
- (void)setNotice:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)status;
- (unsigned long long)timestamp;

@end
