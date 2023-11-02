
@interface FBKResolver : NSObject {
    NSArray * _arguments;
}

@property (readonly) NSArray *arguments;

+ (id)name;
+ (id)resolverForName:(id)arg1;
+ (id)resolverForName:(id)arg1 arguments:(id)arg2;
+ (id)resolverForQuestion:(id)arg1;

- (void).cxx_destruct;
- (id)arguments;
- (long long)expectedArguments;
- (id)run;
- (void)setArguments:(id)arg1;

@end
