
@interface AMSMediaVideo : NSObject {
    NSDictionary * _videoDictionary;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSDictionary *videoDictionary;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (id)videoDictionary;

@end
