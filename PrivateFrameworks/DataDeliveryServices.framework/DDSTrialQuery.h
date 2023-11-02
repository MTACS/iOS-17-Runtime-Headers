
@interface DDSTrialQuery : NSObject <NSCopying, NSSecureCoding> {
    NSString * _description;
    unsigned int  _namespaceId;
    int  _projectId;
}

@property (readonly) unsigned int namespaceId;
@property (readonly) int projectId;

+ (id)defaultQuery;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProjectId:(int)arg1 namespaceId:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned int)namespaceId;
- (int)projectId;

@end
