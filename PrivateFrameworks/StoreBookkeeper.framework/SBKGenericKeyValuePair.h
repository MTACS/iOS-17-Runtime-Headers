
@interface SBKGenericKeyValuePair : NSObject <NSObject, NSSecureCoding> {
    NSString * _kvsKey;
    NSData * _kvsPayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *kvsKey;
@property (nonatomic, readonly) NSData *kvsPayload;
@property (readonly) Class superclass;

+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
- (id)kvsKey;
- (id)kvsPayload;
- (id)kvsValueDescription;
- (double)timestamp;

@end
