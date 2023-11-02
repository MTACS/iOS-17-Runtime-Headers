
@interface SAMSTypeStats : NSObject {
    unsigned long long  _bytes;
    unsigned long long  _bytes_duplicate;
    unsigned long long  _bytes_missing_load_info;
    unsigned long long  _bytes_out_of_order;
    unsigned long long  _count;
    unsigned long long  _num_duplicate;
    unsigned long long  _num_frames;
    unsigned long long  _num_load_infos;
    unsigned long long  _num_missing_load_info;
    unsigned long long  _num_out_of_order;
}

@property unsigned long long bytes;
@property unsigned long long bytes_duplicate;
@property unsigned long long bytes_missing_load_info;
@property unsigned long long bytes_out_of_order;
@property unsigned long long count;
@property unsigned long long num_duplicate;
@property unsigned long long num_frames;
@property unsigned long long num_load_infos;
@property unsigned long long num_missing_load_info;
@property unsigned long long num_out_of_order;

- (unsigned long long)bytes;
- (unsigned long long)bytes_duplicate;
- (unsigned long long)bytes_missing_load_info;
- (unsigned long long)bytes_out_of_order;
- (unsigned long long)count;
- (unsigned long long)num_duplicate;
- (unsigned long long)num_frames;
- (unsigned long long)num_load_infos;
- (unsigned long long)num_missing_load_info;
- (unsigned long long)num_out_of_order;
- (void)setBytes:(unsigned long long)arg1;
- (void)setBytes_duplicate:(unsigned long long)arg1;
- (void)setBytes_missing_load_info:(unsigned long long)arg1;
- (void)setBytes_out_of_order:(unsigned long long)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setNum_duplicate:(unsigned long long)arg1;
- (void)setNum_frames:(unsigned long long)arg1;
- (void)setNum_load_infos:(unsigned long long)arg1;
- (void)setNum_missing_load_info:(unsigned long long)arg1;
- (void)setNum_out_of_order:(unsigned long long)arg1;

@end
