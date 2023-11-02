
@interface SGSelfIdentificationDetection : NSObject {
    NSString * _context;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _contextRange;
    SGExtractionInfo * _extractionInfo;
    NSString * _name;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } contextRange;
@property (nonatomic, retain) SGExtractionInfo *extractionInfo;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)context;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })contextRange;
- (id)extractionInfo;
- (id)name;
- (void)setContext:(id)arg1;
- (void)setContextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setExtractionInfo:(id)arg1;
- (void)setName:(id)arg1;

@end
