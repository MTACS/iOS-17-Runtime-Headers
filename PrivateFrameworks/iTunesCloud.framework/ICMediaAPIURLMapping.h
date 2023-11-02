
@interface ICMediaAPIURLMapping : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly, copy) NSString *pattern;

- (void).cxx_destruct;
- (id)featureName;
- (id)initWithResponseDictionary:(id)arg1;
- (id)pattern;

@end
