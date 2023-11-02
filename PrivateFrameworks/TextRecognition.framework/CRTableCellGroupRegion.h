
@interface CRTableCellGroupRegion : CRGroupRegion {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _columns;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rows;
}

@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } columns;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rows;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columns;
- (id)initWithBoundingQuad:(id)arg1 layoutDirection:(unsigned long long)arg2 subregions:(id)arg3 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 columns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rows;

@end
