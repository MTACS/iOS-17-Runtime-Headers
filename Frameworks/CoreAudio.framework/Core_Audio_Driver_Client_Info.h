
@interface Core_Audio_Driver_Client_Info : NSObject <NSSecureCoding> {
    NSString * _bundle_id;
    unsigned int  _client_id;
    bool  _is_native_endian;
    int  _process_id;
}

@property (nonatomic, retain) NSString *bundle_id;
@property (nonatomic) unsigned int client_id;
@property (nonatomic) bool is_native_endian;
@property (nonatomic) int process_id;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundle_id;
- (unsigned int)client_id;
- (struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; })create_asp_client_info;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init_with_asp_client_info:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg1;
- (bool)is_native_endian;
- (int)process_id;
- (void)setBundle_id:(id)arg1;
- (void)setClient_id:(unsigned int)arg1;
- (void)setIs_native_endian:(bool)arg1;
- (void)setProcess_id:(int)arg1;

@end
