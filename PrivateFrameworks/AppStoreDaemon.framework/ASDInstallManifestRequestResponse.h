
@interface ASDInstallManifestRequestResponse : ASDRequestResponse {
    NSArray * _results;
}

@property (nonatomic, readonly) NSArray *results;
@property bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)results;

@end
