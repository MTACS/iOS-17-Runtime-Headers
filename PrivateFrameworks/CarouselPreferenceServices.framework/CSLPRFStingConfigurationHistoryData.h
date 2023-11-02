
@interface CSLPRFStingConfigurationHistoryData : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _actionsDictionary;
    NSString * _version;
}

@property (nonatomic, retain) NSDictionary *actionsDictionary;
@property (nonatomic, retain) NSString *version;

+ (id)fromExportData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionsDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActionsDictionary:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)toExportData;
- (id)version;

@end
