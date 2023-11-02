
@interface WFObjectNameProvider : NSObject {
    NSDictionary * _contents;
}

@property (nonatomic, readonly, copy) NSDictionary *contents;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)contents;
- (id)init;
- (id)nameForObject:(id)arg1;

@end
