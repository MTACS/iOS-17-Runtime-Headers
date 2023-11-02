
@interface GTTelemetryResponse : NSObject <NSSecureCoding> {
    NSData * _data;
    NSError * _error;
    unsigned long long  _requestID;
    union GTDataVersion { 
        struct { 
            unsigned int version; 
            unsigned int type; 
        } ; 
        unsigned long long value; 
    }  _version;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) unsigned long long requestID;
@property (nonatomic) union GTDataVersion { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; } version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)requestID;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRequestID:(unsigned long long)arg1;
- (void)setVersion:(union GTDataVersion { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (union GTDataVersion { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })version;

@end
