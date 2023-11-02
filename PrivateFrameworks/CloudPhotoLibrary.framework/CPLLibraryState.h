
@interface CPLLibraryState : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _deleteDate;
    bool  _disabled;
    NSDate * _disabledDate;
}

@property (nonatomic, copy) NSDate *deleteDate;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, copy) NSDate *disabledDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteDate;
- (id)description;
- (id)disabledDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (void)setDeleteDate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisabledDate:(id)arg1;

@end
