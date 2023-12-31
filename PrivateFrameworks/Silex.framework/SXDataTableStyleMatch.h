
@interface SXDataTableStyleMatch : NSObject {
    SXJSONDataTableSelector * _selector;
    SXDataTableElementStyle * _style;
}

@property (nonatomic, readonly) SXJSONDataTableSelector *selector;
@property (nonatomic, readonly) SXDataTableElementStyle *style;

+ (id)matchWithStyle:(id)arg1 andSelector:(id)arg2;

- (void).cxx_destruct;
- (id)initWithStyle:(id)arg1 andSelector:(id)arg2;
- (id)selector;
- (id)style;

@end
