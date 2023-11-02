
@interface SVXSpeechSynthesisWordTiming : NSObject <NSCopying, NSSecureCoding> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    double  _timeInterval;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) double timeInterval;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 timeInterval:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (double)timeInterval;

@end
