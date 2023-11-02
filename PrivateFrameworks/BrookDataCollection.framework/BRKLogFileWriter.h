
@interface BRKLogFileWriter : BRKWriter <BRKLogWriter> {
    NSMutableArray * _json;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_close;
- (void)_lock_writeJSON:(id)arg1;
- (void)close;
- (void)writeJSON:(id)arg1;

@end
