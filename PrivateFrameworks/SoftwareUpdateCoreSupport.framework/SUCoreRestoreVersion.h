
@interface SUCoreRestoreVersion : NSObject <NSSecureCoding> {
    long long  _buildGroup;
    long long  _buildVersion;
    long long  _majorVersion;
    long long  _minorVersion;
    NSArray * _parsedVersion;
    NSString * _restoreVersionString;
    long long  _suffixVersion;
    long long  _syncedVersion;
}

@property (nonatomic) long long buildGroup;
@property (nonatomic, readonly) long long buildVersion;
@property (nonatomic, readonly) long long majorVersion;
@property (nonatomic, readonly) long long minorVersion;
@property (nonatomic, retain) NSArray *parsedVersion;
@property (nonatomic, retain) NSString *restoreVersionString;
@property (nonatomic, readonly) long long suffixVersion;
@property (nonatomic, readonly) long long syncedVersion;

+ (bool)_enableVerboseLogging;
+ (id)_stringForNSComparisonResult:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isStringOnlyNumbers:(id)arg1;
- (void)_parseRestoreVersionString;
- (long long)buildGroup;
- (long long)buildVersion;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestoreVersion:(id)arg1;
- (bool)isComparable:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)majorVersion;
- (long long)minorVersion;
- (id)parsedVersion;
- (id)restoreVersionString;
- (void)setBuildGroup:(long long)arg1;
- (void)setParsedVersion:(id)arg1;
- (void)setRestoreVersionString:(id)arg1;
- (long long)suffixVersion;
- (id)summary;
- (long long)syncedVersion;

@end
