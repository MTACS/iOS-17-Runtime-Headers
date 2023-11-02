
@interface _MDQueryTokenRewrite : NSObject {
    NSString * _originalToken;
    NSArray * _variations;
}

@property (nonatomic, copy) NSString *originalToken;
@property (nonatomic, readonly, copy) NSArray *variations;

- (void)dealloc;
- (id)initWithOriginalToken:(id)arg1 variations:(id)arg2;
- (id)originalToken;
- (void)setOriginalToken:(id)arg1;
- (id)variations;

@end
