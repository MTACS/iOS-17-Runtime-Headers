
@interface SVAudioSessionConfiguration : NSObject {
    NSString * _category;
    NSString * _mode;
    unsigned long long  _routeSharingPolicy;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *mode;
@property (nonatomic) unsigned long long routeSharingPolicy;

- (void).cxx_destruct;
- (id)category;
- (id)initWithCategory:(id)arg1 mode:(id)arg2 policy:(unsigned long long)arg3;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)mode;
- (unsigned long long)routeSharingPolicy;
- (void)setCategory:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setRouteSharingPolicy:(unsigned long long)arg1;

@end
