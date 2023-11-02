
@interface _UIEditMenuListPage : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    double  _width;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) double width;

- (void)appendItemWithWidth:(double)arg1;
- (id)description;
- (void)enforceMinimumWidth:(double)arg1;
- (id)initWithStartIndex:(long long)arg1;
- (void)prependItemWithWidth:(double)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)removeLastItemWithWidth:(double)arg1;
- (double)width;

@end
