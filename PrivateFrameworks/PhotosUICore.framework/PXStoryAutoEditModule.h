
@interface PXStoryAutoEditModule : NSObject {
    long long  _moduleType;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) long long moduleType;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id)debugDescription;
- (id)initWithModuleType:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (long long)moduleType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
