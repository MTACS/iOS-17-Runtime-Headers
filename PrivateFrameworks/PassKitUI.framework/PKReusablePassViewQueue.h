
@interface PKReusablePassViewQueue : NSObject {
    NSMutableSet * _passViews;
}

- (void).cxx_destruct;
- (id)dequeueReusablePassView;
- (void)enqueueReusablePassView:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;

@end
