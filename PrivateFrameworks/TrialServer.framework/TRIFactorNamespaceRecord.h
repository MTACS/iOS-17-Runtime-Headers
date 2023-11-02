
@interface TRIFactorNamespaceRecord : NSObject <NSCopying> {
    NSString * _factorName;
    NSString * _namespaceName;
}

@property (nonatomic, readonly) NSString *factorName;
@property (nonatomic, readonly) NSString *namespaceName;

+ (id)factorRecordWithFactorName:(id)arg1 namespaceName:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementFactorName:(id)arg1;
- (id)copyWithReplacementNamespaceName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)factorName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFactorName:(id)arg1 namespaceName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFactorRecord:(id)arg1;
- (id)namespaceName;

@end
