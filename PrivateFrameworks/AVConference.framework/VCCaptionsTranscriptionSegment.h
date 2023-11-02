
@interface VCCaptionsTranscriptionSegment : NSObject <NSCoding, NSCopying, NSSecureCoding, VCCaptionsTranscriptionSegment> {
    unsigned int  _confidence;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _text;
}

@property (nonatomic, readonly) unsigned int confidence;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *text;

+ (bool)supportsSecureCoding;

- (unsigned int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(unsigned int)arg1 text:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)text;

@end
