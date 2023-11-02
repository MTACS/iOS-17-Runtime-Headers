
@interface FigCaptureFlatPlist : NSObject {
    struct { 
        void *base; 
        void *offsetTable; 
        unsigned long long nObjects; 
        unsigned long long topObjectOffset; 
        unsigned long long offsetTableStart; 
        unsigned char sortVersion; 
        unsigned char offsetSize; 
        unsigned char referenceSize; 
    }  _bplist;
    NSMutableData * _data;
}

+ (id)flatPlistWithContentsOfFile:(id)arg1;
+ (id)flatPlistWithContentsOfURL:(id)arg1;

- (const struct { void *x1; void *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)bplist;
- (void)dealloc;

@end
