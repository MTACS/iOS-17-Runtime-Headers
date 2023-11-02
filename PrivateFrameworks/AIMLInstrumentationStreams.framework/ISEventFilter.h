
@interface ISEventFilter : NSObject {
    void filter;
}

+ (id)allOf:(Class)arg1;
+ (id)everything;
+ (id)someOf:(Class)arg1 types:(id)arg2;

- (void).cxx_destruct;
- (id)combine:(id)arg1;
- (id)init;

@end
