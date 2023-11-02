
@interface AFMyriadAdvertisementContext : NSObject <NSCopying, NSSecureCoding> {
    NSData * _contextData;
    double  _contextFetchDelay;
    unsigned long long  _generation;
}

@property (nonatomic, readonly, copy) NSData *contextData;
@property (nonatomic, readonly) double contextFetchDelay;
@property (nonatomic, readonly) unsigned long long generation;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)contextData;
- (double)contextFetchDelay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeneration:(unsigned long long)arg1 contextData:(id)arg2 contextFetchDelay:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
