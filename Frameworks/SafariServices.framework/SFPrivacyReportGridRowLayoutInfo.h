
@interface SFPrivacyReportGridRowLayoutInfo : NSObject {
    double  _height;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _itemRange;
    long long  _row;
}

@property (nonatomic) double height;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } itemRange;
@property (nonatomic, readonly) long long row;

- (double)height;
- (id)initWithRow:(long long)arg1 itemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemRange;
- (long long)row;
- (void)setHeight:(double)arg1;

@end
