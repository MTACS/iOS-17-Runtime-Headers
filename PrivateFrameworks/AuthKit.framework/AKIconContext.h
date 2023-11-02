
@interface AKIconContext : NSObject <NSSecureCoding> {
    NSString * _appName;
    NSData * _data;
    unsigned long long  _maskingStyle;
    NSNumber * _scale;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) unsigned long long maskingStyle;
@property (nonatomic, retain) NSNumber *scale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appName;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maskingStyle;
- (id)scale;
- (void)setAppName:(id)arg1;
- (void)setData:(id)arg1;
- (void)setMaskingStyle:(unsigned long long)arg1;
- (void)setScale:(id)arg1;

@end
