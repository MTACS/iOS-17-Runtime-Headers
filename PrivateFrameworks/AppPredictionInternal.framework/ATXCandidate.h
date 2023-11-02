
@interface ATXCandidate : NSObject <NSCopying, NSSecureCoding> {
    <BMStoreData> * _biomeStoreData;
}

@property (nonatomic, readonly) <BMStoreData> *biomeStoreData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)biomeStoreData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBiomeStoreData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXCandidate:(id)arg1;
- (long long)suggestionExecutableType;
- (id)type;

@end
