
@interface AFSpeechSynthesisRecord : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _beginTimestamp;
    unsigned long long  _endTimestamp;
    NSString * _utterance;
}

@property (nonatomic, readonly) unsigned long long beginTimestamp;
@property (nonatomic, readonly) unsigned long long endTimestamp;
@property (nonatomic, readonly, copy) NSString *utterance;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)beginTimestamp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtterance:(id)arg1 beginTimestamp:(unsigned long long)arg2 endTimestamp:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)utterance;

@end
