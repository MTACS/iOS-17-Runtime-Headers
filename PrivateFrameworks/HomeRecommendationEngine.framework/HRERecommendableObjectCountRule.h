
@interface HRERecommendableObjectCountRule : HRERecommendableObjectTypeRule {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _allowedCount;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } allowedCount;

+ (id)ruleWithAccessoryType:(id)arg1 allowedCount:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })allowedCount;
- (id)initWithAccessoryType:(id)arg1 allowedCount:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)passesWithHomeObjects:(id)arg1;

@end
