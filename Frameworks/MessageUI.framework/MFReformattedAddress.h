
@interface MFReformattedAddress : NSObject {
    NSString * _address;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _middleTruncationRange;
}

@property (nonatomic, readonly) NSString *domainPart;
@property (nonatomic, readonly) NSString *localPart;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } middleTruncationRange;

- (void).cxx_destruct;
- (id)attributedStringWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3;
- (id)description;
- (id)domainPart;
- (id)initWithAddress:(id)arg1;
- (id)localPart;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })middleTruncationRange;
- (void)setMiddleTruncationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)widthWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3;

@end
