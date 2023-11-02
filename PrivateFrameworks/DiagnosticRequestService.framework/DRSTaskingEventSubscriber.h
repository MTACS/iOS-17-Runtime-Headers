
@interface DRSTaskingEventSubscriber : NSObject {
    NSString * _teamID;
    unsigned long long  _token;
}

@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) unsigned long long token;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTeamID:(id)arg1 token:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)teamID;
- (unsigned long long)token;

@end
