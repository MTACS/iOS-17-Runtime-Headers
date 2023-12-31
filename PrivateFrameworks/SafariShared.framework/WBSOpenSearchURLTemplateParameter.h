
@interface WBSOpenSearchURLTemplateParameter : NSObject {
    NSString * _name;
    bool  _optional;
    NSString * _prefix;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, copy) NSString *name;
@property (getter=isOptional, nonatomic) bool optional;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (bool)isOptional;
- (id)name;
- (id)prefix;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setName:(id)arg1;
- (void)setOptional:(bool)arg1;
- (void)setPrefix:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
