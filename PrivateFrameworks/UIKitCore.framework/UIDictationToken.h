
@interface UIDictationToken : NSObject <NSSecureCoding> {
    bool  _removeSpaceAfter;
    bool  _removeSpaceBefore;
    NSString * _text;
}

@property (nonatomic, readonly) bool removeSpaceAfter;
@property (nonatomic) bool removeSpaceBefore;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionExtra;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 removeSpaceBefore:(bool)arg2 removeSpaceAfter:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)removeSpaceAfter;
- (bool)removeSpaceBefore;
- (void)setRemoveSpaceBefore:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
