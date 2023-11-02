
@interface WAAQIScale : NSObject {
    NSMutableArray * _categories;
    WAAQIGradient * _gradient;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, copy) NSMutableArray *categories;
@property (nonatomic, readonly) WAAQIGradient *gradient;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)scaleFromFoundationScale:(id)arg1;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (id)categories;
- (id)gradient;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setCategories:(id)arg1;

@end
