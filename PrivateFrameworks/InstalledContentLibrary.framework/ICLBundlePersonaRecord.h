
@interface ICLBundlePersonaRecord : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _dataContainerURL;
    NSDictionary * _environmentVariables;
    NSDictionary * _groupContainerURLs;
}

@property (nonatomic, copy) NSURL *dataContainerURL;
@property (nonatomic, copy) NSDictionary *environmentVariables;
@property (nonatomic, copy) NSDictionary *groupContainerURLs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataContainerURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)environmentVariables;
- (id)groupContainerURLs;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDataContainerURL:(id)arg1;
- (void)setEnvironmentVariables:(id)arg1;
- (void)setGroupContainerURLs:(id)arg1;

@end
