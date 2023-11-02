
@interface NSAttributedStringMarkdownSourcePosition : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        long long utf8Offset; 
        long long utf16Offset; 
        long long utf8NextCodePoint; 
        long long utf16CurrentCodePointLength; 
        long long line; 
        long long column; 
    }  _endOffsets;
    struct { 
        long long utf8Offset; 
        long long utf16Offset; 
        long long utf8NextCodePoint; 
        long long utf16CurrentCodePointLength; 
        long long line; 
        long long column; 
    }  _startOffsets;
}

@property (readonly) long long endColumn;
@property (readonly) long long endLine;
@property (readonly) long long startColumn;
@property (readonly) long long startLine;

+ (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; })calculateOffsetsForLine:(long long)arg1 column:(long long)arg2 inString:(const char *)arg3 size:(unsigned long long)arg4 withExistingOffsets:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; })arg5;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)endColumn;
- (long long)endLine;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; })endOffsets;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStart:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; })arg1 end:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; })arg2;
- (id)initWithStartLine:(long long)arg1 startColumn:(long long)arg2 endLine:(long long)arg3 endColumn:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInString:(id)arg1;
- (void)setOffsetsFromUTF8:(const char *)arg1 size:(unsigned long long)arg2 usingCache:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; }*)arg3;
- (long long)startColumn;
- (long long)startLine;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; })startOffsets;

@end
