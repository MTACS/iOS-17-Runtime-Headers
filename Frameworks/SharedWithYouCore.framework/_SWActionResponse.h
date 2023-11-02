
@interface _SWActionResponse : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    BSActionResponse * _sourceBSActionResponse;
    bool  _success;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) BSActionResponse *sourceBSActionResponse;
@property (nonatomic) bool success;

+ (id)responseWithDestinationResponse:(id)arg1;
+ (id)responseWithSuccess:(bool)arg1 error:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSActionResponseSettings:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationResponse:(id)arg1;
- (id)initWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionResponse:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (id)sourceBSActionResponse;
- (bool)success;

@end
