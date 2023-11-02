
@interface SIRINLURequestID : NSObject <NSSecureCoding> {
    NSString * _connectionID;
    NSString * _idAsString;
    NSUUID * _nluRequestId;
}

@property (nonatomic, retain) NSString *connectionID;
@property (nonatomic, retain) NSString *idAsString;
@property (nonatomic, retain) NSUUID *nluRequestId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectionID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)idAsString;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdAsString:(id)arg1 connectionID:(id)arg2;
- (id)initWithIdAsString:(id)arg1 nluRequestId:(id)arg2 connectionID:(id)arg3;
- (id)nluRequestId;
- (void)setConnectionID:(id)arg1;
- (void)setIdAsString:(id)arg1;
- (void)setNluRequestId:(id)arg1;

@end
