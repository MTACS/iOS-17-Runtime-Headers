
@interface ECSubject : NSObject <EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    bool  _hasPrefix;
    long long  _hasReplyPrefixState;
    unsigned long long  _length;
    NSString * _prefix;
    unsigned long long  _prefixLength;
    NSString * _subjectWithoutPrefix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) bool hasPrefix;
@property (nonatomic, readonly) bool hasReplyPrefix;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic, readonly) unsigned long long prefixLength;
@property (nonatomic, readonly, copy) NSString *subjectString;
@property (nonatomic, copy) NSString *subjectWithoutPrefix;
@property (readonly) Class superclass;

+ (id)_prefixTruncatedToMaximumAllowableSize:(id)arg1;
+ (id)_subjectTruncatedToMaximumAllowableSize:(id)arg1;
+ (id)_uniqueString:(id)arg1 type:(long long)arg2;
+ (id)subjectWithString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPrefix;
- (bool)hasReplyPrefix;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrefix:(id)arg1 subjectWithoutPrefix:(id)arg2;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isEqualToSubject:(id)arg1;
- (bool)isEqualToSubjectIgnoringPrefix:(id)arg1;
- (unsigned long long)length;
- (id)prefix;
- (unsigned long long)prefixLength;
- (void)setPrefix:(id)arg1;
- (void)setSubjectWithoutPrefix:(id)arg1;
- (id)subjectString;
- (id)subjectWithoutPrefix;

@end
