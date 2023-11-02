
@interface CLSInsightEvent : CLSObject {
    NSMutableDictionary * _info;
    long long  _type;
}

@property (nonatomic, retain) NSMutableDictionary *info;
@property (nonatomic) long long type;

+ (id)supportedInfoDictionaryClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_infoDictDescription;
- (id)_init;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)info;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)mergeWithObject:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (bool)validateObject:(id*)arg1;

@end
