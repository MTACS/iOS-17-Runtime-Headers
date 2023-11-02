
@interface ANSTSkinToneEstimate : NSObject <NSSecureCoding> {
    long long  _typeIConfidence;
    long long  _typeIIConfidence;
    long long  _typeIIIConfidence;
    long long  _typeIVConfidence;
    long long  _typeVConfidence;
    long long  _typeVIConfidence;
}

@property (nonatomic, readonly) long long typeIConfidence;
@property (nonatomic, readonly) long long typeIIConfidence;
@property (nonatomic, readonly) long long typeIIIConfidence;
@property (nonatomic, readonly) long long typeIVConfidence;
@property (nonatomic, readonly) long long typeVConfidence;
@property (nonatomic, readonly) long long typeVIConfidence;

+ (id)new;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeIConfidence:(long long)arg1 typeIIConfidence:(long long)arg2 typeIIIConfidence:(long long)arg3 typeIVConfidence:(long long)arg4 typeVConfidence:(long long)arg5 typeVIConfidence:(long long)arg6;
- (long long)typeIConfidence;
- (long long)typeIIConfidence;
- (long long)typeIIIConfidence;
- (long long)typeIVConfidence;
- (long long)typeVConfidence;
- (long long)typeVIConfidence;

@end
