
@interface DTTapStatusMessage : DTTapMessage <NSSecureCoding>

@property (nonatomic, readonly, copy) NSDictionary *info;
@property (nonatomic, readonly, copy) NSString *notice;
@property (nonatomic, readonly) unsigned int status;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (bool)supportsSecureCoding;

- (id)info;
- (id)initWithStatus:(unsigned int)arg1 timestamp:(unsigned long long)arg2 notice:(id)arg3 info:(id)arg4;
- (id)notice;
- (void)setInfo:(id)arg1;
- (void)setNotice:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)status;
- (unsigned long long)timestamp;

@end
