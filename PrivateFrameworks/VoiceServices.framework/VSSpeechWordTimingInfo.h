
@interface VSSpeechWordTimingInfo : NSObject <NSCopying, NSSecureCoding> {
    double  _startTime;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
}

@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;

+ (void)adjustWordTimingInfo:(id)arg1 forContext:(id)arg2;
+ (unsigned long long)extraBytesFromUTF8ToUTF16With:(const char *)arg1 totalLength:(unsigned long long)arg2 begin:(unsigned long long)arg3 end:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;
+ (id)utf16TimingInfoWithUTF8Range:(id)arg1 withText:(id)arg2;
+ (id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)startTime;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;

@end
