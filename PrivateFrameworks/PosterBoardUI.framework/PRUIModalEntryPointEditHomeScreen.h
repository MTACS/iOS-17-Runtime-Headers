
@interface PRUIModalEntryPointEditHomeScreen : NSObject <PRUIModalEntryPoint> {
    PRSServerPosterPath * _serverPosterPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSServerPosterPath *serverPosterPath;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_BSXPCSecureCodingEntryPointTypeString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithServiceConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serverPosterPath;

@end
