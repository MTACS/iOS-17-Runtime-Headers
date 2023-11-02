
@interface DACUnknownActivityPolicy : NSObject <NSSecureCoding> {
    NSString * _audioSessionCategory;
    NSString * _audioSessionMode;
    unsigned long long  _audioSessionOptions;
    unsigned long long  _audioSessionRouteSharingPolicy;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSString *audioSessionCategory;
@property (nonatomic, readonly, copy) NSString *audioSessionMode;
@property (nonatomic, readonly) unsigned long long audioSessionOptions;
@property (nonatomic, readonly) unsigned long long audioSessionRouteSharingPolicy;
@property (nonatomic, readonly) unsigned long long options;

+ (id)audioPolicyWithOptions:(unsigned long long)arg1 audioSessionCategory:(id)arg2 audioSessionMode:(id)arg3 audioSessionOptions:(unsigned long long)arg4;
+ (id)audioPolicyWithOptions:(unsigned long long)arg1 audioSessionCategory:(id)arg2 audioSessionMode:(id)arg3 audioSessionOptions:(unsigned long long)arg4 audioSessionRouteSharingPolicy:(unsigned long long)arg5;
+ (id)policyWithOptions:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioSessionCategory;
- (id)audioSessionMode;
- (unsigned long long)audioSessionOptions;
- (unsigned long long)audioSessionRouteSharingPolicy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;

@end
