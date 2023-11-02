
@interface SASTestingInput : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _recordedSpeechURL;
    NSString * _text;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSURL *recordedSpeechURL;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) long long type;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 text:(id)arg2 recordedSpeechURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)recordedSpeechURL;
- (id)text;
- (long long)type;

@end
