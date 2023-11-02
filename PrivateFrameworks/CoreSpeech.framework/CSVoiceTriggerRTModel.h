
@interface CSVoiceTriggerRTModel : NSObject <NSCopying, NSSecureCoding> {
    NSData * _certificate;
    NSData * _digest;
    NSData * _modelData;
    NSString * _modelHash;
    NSString * _modelLocale;
    NSData * _signature;
}

@property (nonatomic, readonly) NSData *certificate;
@property (nonatomic, readonly) NSData *digest;
@property (nonatomic, readonly) NSData *modelData;
@property (nonatomic, readonly) NSString *modelHash;
@property (nonatomic, readonly) NSString *modelLocale;
@property (nonatomic, readonly) NSData *signature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)builtInRTModelDictionary;
- (id)certificate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)digest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3;
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 digest:(id)arg4 signature:(id)arg5 certificate:(id)arg6;
- (id)initWithHash:(id)arg1 locale:(id)arg2;
- (id)modelData;
- (id)modelHash;
- (id)modelLocale;
- (id)signature;

@end
