
@interface DIDropInRequest : NSObject <NSSecureCoding> {
    DIXPCConnectionManager * _connectionManager;
    NSUUID * _existingSessionIdentifier;
    DIHandle * _handle;
}

@property (nonatomic) DIXPCConnectionManager *connectionManager;
@property (nonatomic, retain) NSUUID *existingSessionIdentifier;
@property (nonatomic, retain) DIHandle *handle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectionManager;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)existingSessionIdentifier;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithHandle:(id)arg1 connectionManager:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setConnectionManager:(id)arg1;
- (void)setExistingSessionIdentifier:(id)arg1;
- (void)setHandle:(id)arg1;

@end
