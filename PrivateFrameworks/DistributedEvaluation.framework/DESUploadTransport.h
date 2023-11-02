
@interface DESUploadTransport : NSObject <NSCopying, NSSecureCoding> {
    bool  _dediscoRoute;
    bool  _originRoute;
    bool  _parsecRoute;
    NSURL * _postBackBaseURL;
}

@property (nonatomic, readonly) bool dediscoRoute;
@property (nonatomic, readonly) bool originRoute;
@property (nonatomic, readonly) bool parsecRoute;
@property (nonatomic, readonly, copy) NSURL *postBackBaseURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dediscoRoute;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDediscoRoute:(bool)arg1 originRoute:(bool)arg2 parsecRoute:(bool)arg3 postBackBaseURL:(id)arg4;
- (id)initWithPolicy:(id)arg1 recipe:(id)arg2;
- (bool)originRoute;
- (bool)parsecRoute;
- (id)postBackBaseURL;

@end
