
@interface AFSetAudioSessionActiveResult : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _audioSessionID;
    NSError * _error;
}

@property (nonatomic, readonly) unsigned int audioSessionID;
@property (nonatomic, readonly, copy) NSError *error;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (unsigned int)audioSessionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAudioSessionID:(unsigned int)arg1 error:(id)arg2;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
