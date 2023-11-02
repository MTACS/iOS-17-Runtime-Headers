
@interface EMTSpan : NSObject <NSCopying> {
    bool  _doNotTranslate;
    NSString * _identifier;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) bool doNotTranslate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)doNotTranslate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 doNotTranslate:(bool)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
