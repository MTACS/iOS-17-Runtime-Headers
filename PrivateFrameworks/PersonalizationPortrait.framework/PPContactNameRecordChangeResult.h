
@interface PPContactNameRecordChangeResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _changes;
    bool  _changesTruncated;
}

@property (nonatomic, readonly) NSArray *changes;
@property (nonatomic, readonly) bool changesTruncated;

+ (id)contactNameRecordChangeResultWithChanges:(id)arg1 changesTruncated:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changes;
- (bool)changesTruncated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChanges:(id)arg1 changesTruncated:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactNameRecordChangeResult:(id)arg1;

@end
