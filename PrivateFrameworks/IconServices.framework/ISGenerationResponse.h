
@interface ISGenerationResponse : NSObject <NSSecureCoding> {
    NSData * _data;
    NSError * _error;
    NSUUID * _uuid;
    NSData * _validationToken;
}

@property (readonly) NSData *data;
@property (readonly) NSError *error;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 uuid:(id)arg2 validationToken:(id)arg3;
- (id)initWithError:(id)arg1;
- (id)uuid;
- (id)validationToken;

@end
