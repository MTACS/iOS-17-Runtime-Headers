
@interface MKTransitInfoPreloader : NSObject {
    NSArray * _transitLabels;
}

+ (id)attributedTextFromPreload:(id)arg1 view:(id)arg2;
+ (id)separatorImageWithLineHeight:(double)arg1;

- (void).cxx_destruct;
- (id)initWithTransitLabels:(id)arg1;
- (void)preloadWithCompletion:(id /* block */)arg1;

@end
