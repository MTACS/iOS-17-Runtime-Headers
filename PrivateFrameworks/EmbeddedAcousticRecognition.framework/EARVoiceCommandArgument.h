
@interface EARVoiceCommandArgument : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet * _adpositionIndexes;
    NSIndexSet * _indexes;
    BOOL  _presence;
}

@property (nonatomic, readonly, copy) NSIndexSet *adpositionIndexes;
@property (nonatomic, readonly, copy) NSIndexSet *indexes;
@property (nonatomic, readonly) BOOL presence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adpositionIndexes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indexes;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresence:(BOOL)arg1 indexes:(id)arg2 adpositionIndexes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (BOOL)presence;

@end
