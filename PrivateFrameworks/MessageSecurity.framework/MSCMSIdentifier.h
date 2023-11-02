
@interface MSCMSIdentifier : NSObject {
    struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_1_1; void *x_1_1_2; } x1; struct heim_integer { unsigned long long x_2_1_1; void *x_2_1_2; int x_2_1_3; } x2; } * _issuerAndSerialNumber;
    NSData * _issuerNameData;
    NSData * _serialNumberData;
    NSData * _skidData;
    struct heim_base_data { unsigned long long x1; void *x2; } * _subjectKeyId;
    int  _type;
}

@property struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_1_1; void *x_1_1_2; } x1; struct heim_integer { unsigned long long x_2_1_1; void *x_2_1_2; int x_2_1_3; } x2; }*issuerAndSerialNumber;
@property (retain) NSData *issuerNameData;
@property (retain) NSData *serialNumberData;
@property (retain) NSData *skidData;
@property struct heim_base_data { unsigned long long x1; void *x2; }*subjectKeyId;
@property int type;

+ (id)decodeIdentifier:(struct heim_base_data { unsigned long long x1; void *x2; }*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)encodeMessageSecurityObject:(id*)arg1;
- (id)initWithIssuerName:(id)arg1 serialNumber:(id)arg2;
- (id)initWithIssuerName:(id)arg1 serialNumber:(id)arg2 negativeNumber:(bool)arg3;
- (id)initWithSkid:(id)arg1;
- (struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_1_1; void *x_1_1_2; } x1; struct heim_integer { unsigned long long x_2_1_1; void *x_2_1_2; int x_2_1_3; } x2; }*)issuerAndSerialNumber;
- (id)issuerNameData;
- (id)serialNumberData;
- (void)setIssuerAndSerialNumber:(struct IssuerAndSerialNumber { struct heim_base_data { unsigned long long x_1_1_1; void *x_1_1_2; } x1; struct heim_integer { unsigned long long x_2_1_1; void *x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)setIssuerNameData:(id)arg1;
- (void)setSerialNumberData:(id)arg1;
- (void)setSkidData:(id)arg1;
- (void)setSubjectKeyId:(struct heim_base_data { unsigned long long x1; void *x2; }*)arg1;
- (void)setType:(int)arg1;
- (id)skidData;
- (struct heim_base_data { unsigned long long x1; void *x2; }*)subjectKeyId;
- (int)type;

@end
