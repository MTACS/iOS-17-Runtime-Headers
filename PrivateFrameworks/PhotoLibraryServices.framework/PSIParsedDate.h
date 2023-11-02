
@interface PSIParsedDate : NSObject {
    NSDictionary * _attributes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _extensionRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly, copy) NSDictionary *attributes;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } extensionRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (id)attributes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })extensionRange;
- (id)initWithAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 extensionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
