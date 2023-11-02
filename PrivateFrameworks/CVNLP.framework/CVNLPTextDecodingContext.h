
@interface CVNLPTextDecodingContext : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _activeRange;
    NSString * _history;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } activeRange;
@property (nonatomic, readonly) NSString *history;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })activeRange;
- (id)activeSubstring;
- (id)history;
- (id)inactiveSubstring;
- (id)initWithHistory:(id)arg1;
- (id)initWithHistory:(id)arg1 activeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
