
@interface _UIDebugLogMessage : NSObject {
    NSAttributedString * _attributedString;
    NSString * _string;
}

+ (id)messageWithFormat:(id)arg1;
+ (id)messageWithNewline;
+ (id)messageWithPrefix:(id)arg1 color:(id)arg2 string:(id)arg3;
+ (id)messageWithString:(id)arg1;
+ (id)messageWithStyle:(unsigned long long)arg1 string:(id)arg2;

- (void).cxx_destruct;
- (id)_attributedStringRepresentation;
- (bool)_isNode;
- (bool)_isTransparent;
- (id)_stringRepresentation;
- (id)attributedDescription;
- (id)description;
- (id)initWithString:(id)arg1 attributedString:(id)arg2;

@end
