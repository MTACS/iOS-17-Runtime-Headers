
@interface AFExperimentState : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    bool  _didEnd;
    NSString * _endingGroupIdentifier;
    NSDate * _lastSyncDate;
    NSString * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didEnd;
@property (nonatomic, readonly, copy) NSString *endingGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastSyncDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *version;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didEnd;
- (void)encodeWithCoder:(id)arg1;
- (id)endingGroupIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLastSyncDate:(id)arg1 didEnd:(bool)arg2 endingGroupIdentifier:(id)arg3 version:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lastSyncDate;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)version;

@end
