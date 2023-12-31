
@interface SXJSONObjectComponentSupport : NSObject {
    NSString * _specVersion;
}

@property (nonatomic, readonly) NSString *specVersion;

+ (id)shared;

- (void).cxx_destruct;
- (id)initWithSpecVersion:(id)arg1;
- (id /* block */)objectValueClassBlock;
- (id /* block */)purgeClassBlock;
- (id)specVersion;

@end
