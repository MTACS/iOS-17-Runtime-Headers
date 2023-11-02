
@interface MPPlaybackSessionCommandInfo : NSObject {
    NSString * _identifier;
    long long  _priority;
    NSString * _revision;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, copy) NSString *revision;

+ (id)commandInfoWithIdentifier:(id)arg1 revision:(id)arg2 priority:(long long)arg3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (long long)priority;
- (id)revision;

@end
