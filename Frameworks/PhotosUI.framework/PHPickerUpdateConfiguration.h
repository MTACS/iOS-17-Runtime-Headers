
@interface PHPickerUpdateConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  __didSetEdgesWithoutContentMargins;
    bool  __didSetSelectionLimit;
    unsigned long long  _edgesWithoutContentMargins;
    long long  _selectionLimit;
}

@property (nonatomic, readonly) bool _didSetEdgesWithoutContentMargins;
@property (nonatomic, readonly) bool _didSetSelectionLimit;
@property (nonatomic, readonly) bool _isValidConfiguration;
@property (nonatomic) unsigned long long edgesWithoutContentMargins;
@property (nonatomic) long long selectionLimit;

+ (bool)supportsSecureCoding;

- (bool)_didSetEdgesWithoutContentMargins;
- (bool)_didSetSelectionLimit;
- (bool)_isValidConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)edgesWithoutContentMargins;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)selectionLimit;
- (void)setEdgesWithoutContentMargins:(unsigned long long)arg1;
- (void)setSelectionLimit:(long long)arg1;

@end
