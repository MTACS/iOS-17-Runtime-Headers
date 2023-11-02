
@interface SAMicrostackshotStatistics : NSObject {
    unsigned long long  _bytes_microstackshots_filtered_out;
    unsigned long long  _bytes_not_microstackshots;
    SAMSTypeStats * _interrupt;
    SAMSTypeStats * _io;
    SAMSTypeStats * _macf;
    unsigned long long  _num_microstackshots_filtered_out;
    SAMSTypeStats * _pmi;
    SAMSTypeStats * _timer;
    SAMSTypeStats * _total;
    SAMSTypeStats * _unknown_type;
}

@property unsigned long long bytes_microstackshots_filtered_out;
@property unsigned long long bytes_not_microstackshots;
@property (readonly) SAMSTypeStats *interrupt;
@property (readonly) SAMSTypeStats *io;
@property (readonly) SAMSTypeStats *macf;
@property unsigned long long num_microstackshots_filtered_out;
@property (readonly) SAMSTypeStats *pmi;
@property (readonly) SAMSTypeStats *timer;
@property (readonly) SAMSTypeStats *total;
@property (readonly) SAMSTypeStats *unknown_type;

- (void).cxx_destruct;
- (unsigned long long)bytes_microstackshots_filtered_out;
- (unsigned long long)bytes_not_microstackshots;
- (id)debugDescription;
- (id)init;
- (id)interrupt;
- (id)io;
- (id)macf;
- (unsigned long long)num_microstackshots_filtered_out;
- (id)pmi;
- (void)setBytes_microstackshots_filtered_out:(unsigned long long)arg1;
- (void)setBytes_not_microstackshots:(unsigned long long)arg1;
- (void)setNum_microstackshots_filtered_out:(unsigned long long)arg1;
- (id)timer;
- (id)total;
- (id)unknown_type;

@end
