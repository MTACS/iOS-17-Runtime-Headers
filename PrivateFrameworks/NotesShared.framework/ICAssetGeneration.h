
@interface ICAssetGeneration : NSObject <NSCopying> {
    NSString * _identifier;
    long long  _number;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long number;
@property (nonatomic, readonly, copy) NSString *rawValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithNumber:(long long)arg1 identifier:(id)arg2;
- (id)initWithRawValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nextGeneration;
- (long long)number;
- (id)rawValue;

@end
