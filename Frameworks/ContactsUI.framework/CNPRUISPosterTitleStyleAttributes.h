
@interface CNPRUISPosterTitleStyleAttributes : NSObject {
    PRUISPosterTitleStyleAttributes * _wrappedPosterTitleStyleAttributes;
}

@property (nonatomic, readonly, copy) PRUISPosterTitleStyleAttributes *wrappedPosterTitleStyleAttributes;

+ (id)attributesForCNConfiguration:(id)arg1;
+ (id)attributesFromData:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)initWithPosterTitleStyleAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)preferredTitleAlignment;
- (unsigned long long)preferredTitleLayout;
- (id)titleColor;
- (id)titleFont;
- (id)wrappedPosterTitleStyleAttributes;

@end
