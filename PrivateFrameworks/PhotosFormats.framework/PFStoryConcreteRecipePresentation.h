
@interface PFStoryConcreteRecipePresentation : NSObject <PFStoryRecipePresentation> {
    NSArray * _clips;
    NSString * _identifier;
}

@property (nonatomic, readonly) long long clipCount;
@property (nonatomic, readonly, copy) NSArray *clips;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)clipAtIndex:(long long)arg1;
- (long long)clipCount;
- (id)clips;
- (id)diagnosticDescription;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 clips:(id)arg2;
- (bool)isEqualToPresentation:(id)arg1;

@end
