
@interface AFExperimentServerConfigurationInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSString * _configurationIdentifier;
    NSURL * _configurationURL;
    double  _maxTimeToSync;
}

@property (nonatomic, readonly, copy) NSString *configurationIdentifier;
@property (nonatomic, readonly, copy) NSURL *configurationURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxTimeToSync;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)configurationIdentifier;
- (id)configurationURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationIdentifier:(id)arg1 configurationURL:(id)arg2 maxTimeToSync:(double)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maxTimeToSync;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
