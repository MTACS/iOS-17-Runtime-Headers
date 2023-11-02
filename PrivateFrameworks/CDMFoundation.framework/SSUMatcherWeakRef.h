
@interface SSUMatcherWeakRef : NSObject {
    SNLPSSUMatcher * _matcher;
}

@property (nonatomic, readonly) SNLPSSUMatcher *matcher;

- (void).cxx_destruct;
- (id)initWithMatcher:(id)arg1;
- (id)matcher;

@end
