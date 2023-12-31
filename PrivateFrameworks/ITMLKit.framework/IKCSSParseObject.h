
@interface IKCSSParseObject : NSObject {
    IKArray * _cssValue;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    long long  _type;
}

@property (nonatomic, retain) IKArray *cssValue;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) long long type;

+ (id)stringifyList:(id)arg1;

- (void).cxx_destruct;
- (id)cssValue;
- (id)description;
- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setCssValue:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
