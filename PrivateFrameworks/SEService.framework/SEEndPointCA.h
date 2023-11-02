
@interface SEEndPointCA : NSObject <NSSecureCoding> {
    NSArray * _certificates;
    NSString * _identifier;
    NSData * _instanceAID;
    NSData * _secureElementAttestation;
    NSString * _subjectIdentifier;
}

@property (retain) NSArray *certificates;
@property (readonly) NSString *identifier;
@property (readonly) NSData *instanceAID;
@property (readonly) NSData *secureElementAttestation;
@property (readonly) NSString *subjectIdentifier;

+ (id)decodeWithData:(id)arg1 error:(id*)arg2;
+ (id)endPointCAWithIdentifier:(id)arg1 subjectIdentifier:(id)arg2 instanceAID:(id)arg3 secureElementAttestation:(id)arg4 error:(id*)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)encodeWithError:(id*)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)instanceAID;
- (id)secureElementAttestation;
- (void)setCertificates:(id)arg1;
- (id)subjectIdentifier;

@end
