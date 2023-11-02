
@interface AFOutputVoiceDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizedDisplay;
    NSString * _localizedDisplayWithRegion;
}

@property (nonatomic, readonly, copy) NSString *localizedDisplay;
@property (nonatomic, readonly, copy) NSString *localizedDisplayWithRegion;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedDisplay:(id)arg1 localizedDisplayWithRegion:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplay;
- (id)localizedDisplayWithRegion;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
