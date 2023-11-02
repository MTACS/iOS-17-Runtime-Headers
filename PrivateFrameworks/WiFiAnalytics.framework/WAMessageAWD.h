
@interface WAMessageAWD : NSObject <NSCopying, NSSecureCoding> {
    bool  _isRootMessage;
    NSString * _key;
    unsigned long long  _metricID;
    NSMutableDictionary * _mutableFields;
    NSString * _originalClassName;
    NSString * _uuid;
}

@property (nonatomic, readonly) bool isRootMessage;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) unsigned long long metricID;
@property (nonatomic, readonly) NSMutableDictionary *mutableFields;
@property (nonatomic, readonly) NSString *originalClassName;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addField:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldForKey:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 andFields:(id)arg2 isRootMessage:(bool)arg3 originalClassName:(id)arg4 uuid:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isRootMessage;
- (id)key;
- (unsigned long long)metricID;
- (id)mutableFields;
- (id)originalClassName;
- (void)setIsRootMessage:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setMetricID:(unsigned long long)arg1;
- (void)setMutableFields:(id)arg1;
- (void)setOriginalClassName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
