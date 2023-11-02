
@interface UIOpenURLContext : NSObject {
    NSURL * _URL;
    UISceneOpenURLOptions * _options;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSDictionary *URLOptionsDictionary;
@property (nonatomic, readonly) UISceneOpenURLOptions *options;
@property (nonatomic, readonly, copy) NSDictionary *optionsDictionary;

- (void).cxx_destruct;
- (id)URL;
- (id)URLOptionsDictionary;
- (id)description;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)options;
- (id)optionsDictionary;

@end
