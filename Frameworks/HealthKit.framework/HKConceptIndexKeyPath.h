
@interface HKConceptIndexKeyPath : NSObject {
    NSString * _fullKeyPath;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly, copy) NSString *fullKeyPath;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)conceptIndexKeyPathWithFullKeyPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)fullKeyPath;
- (id)head;
- (id)init;
- (id)initWithFullKeyPath:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)tail;

@end
