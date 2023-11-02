
@interface CWFSensingResult : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    NSArray * _data;
}

@property (nonatomic, copy) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONCompatibleKeyValueMap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSensingResult:(id)arg1;
- (void)setData:(id)arg1;

@end
