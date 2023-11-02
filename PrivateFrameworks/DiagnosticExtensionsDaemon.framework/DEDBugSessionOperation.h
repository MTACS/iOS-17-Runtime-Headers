
@interface DEDBugSessionOperation : NSObject <DEDSecureArchiving, NSSecureCoding> {
    NSString * _identifier;
    NSDictionary * _options;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *identifier;
@property (retain) NSDictionary *options;
@property (readonly) Class superclass;
@property long long type;

+ (id)archivedClasses;
+ (id)hashingKeyWithId:(id)arg1 type:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hashingKey;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)setIdentifier:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
