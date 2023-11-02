
@interface PromotedContent.ContextKey : NSObject {
    void key;
}

@property (nonatomic, readonly) long long hash;

- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
