
@interface REMCRMutableAttributedString : NSMutableAttributedString {
    NSMutableAttributedString * _backingStore;
    <REMCRMutableAttributedStringEditObserver> * _editObserver;
}

@property (nonatomic, retain) NSMutableAttributedString *backingStore;
@property (nonatomic) <REMCRMutableAttributedStringEditObserver> *editObserver;

+ (id)allowedAttributesForModel;
+ (id)nonEditableAttributes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)backingStore;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)editObserver;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)reportDidEdit:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBackingStore:(id)arg1;
- (void)setEditObserver:(id)arg1;
- (id)string;

@end
