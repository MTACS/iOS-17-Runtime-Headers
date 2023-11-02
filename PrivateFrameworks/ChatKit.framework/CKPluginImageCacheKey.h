
@interface CKPluginImageCacheKey : NSObject {
    long long  _integerIdentifier;
    NSString * _stringIdentifier;
}

@property (nonatomic) long long integerIdentifier;
@property (nonatomic, retain) NSString *stringIdentifier;

+ (id)keyWithStringIdentifier:(id)arg1 integerIdentifier:(long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithStringIdentifier:(id)arg1 integerIdentifier:(long long)arg2;
- (long long)integerIdentifier;
- (bool)isEqual:(id)arg1;
- (void)setIntegerIdentifier:(long long)arg1;
- (void)setStringIdentifier:(id)arg1;
- (id)stringIdentifier;

@end
