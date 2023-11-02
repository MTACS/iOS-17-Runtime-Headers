
@interface PKStrokeProviderSliceIdentifierConcrete : PKStrokeProviderSliceIdentifier {
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _version;
}

@property (nonatomic, readonly) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } version;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg2 tStart:(double)arg3 tEnd:(double)arg4;
- (bool)isEqual:(id)arg1;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })version;

@end
