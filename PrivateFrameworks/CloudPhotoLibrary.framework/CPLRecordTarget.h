
@interface CPLRecordTarget : NSObject <NSCopying, NSSecureCoding> {
    CPLScopedIdentifier * _otherScopedIdentifier;
    CPLScopedIdentifier * _scopedIdentifier;
    long long  _targetState;
}

@property (nonatomic, readonly) CPLScopedIdentifier *otherScopedIdentifier;
@property (nonatomic, readonly) CPLScopedIdentifier *resourceScopedIdentifier;
@property (nonatomic, readonly) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic, readonly) bool shouldUploadToOtherRecord;
@property (nonatomic, readonly) NSString *simpleDescription;
@property (nonatomic, readonly) NSArray *targetScopedIdentifiers;
@property (nonatomic, readonly) long long targetState;

+ (id)descriptionForTargetState:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScopedIdentifier:(id)arg1;
- (id)initWithScopedIdentifier:(id)arg1 otherScopedIdentifier:(id)arg2 targetState:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)otherScopedIdentifier;
- (id)redactedDescription;
- (id)resourceScopedIdentifier;
- (id)scopedIdentifier;
- (bool)shouldUploadToOtherRecord;
- (id)simpleDescription;
- (id)targetScopedIdentifiers;
- (long long)targetState;

@end
