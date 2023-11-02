
@interface DMFRefreshCellularPlansRequest : DMFTaskRequest {
    NSURL * _eSIMServerURL;
}

@property (nonatomic, copy) NSURL *eSIMServerURL;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)eSIMServerURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setESIMServerURL:(id)arg1;

@end
