
@interface STSFieldNFC : STSField {
    unsigned int  _nfcTechnology;
    NSData * _openLoopSchemeBitfield;
    unsigned short  _systemCode;
    NSArray * _tcis;
    unsigned int  _terminalMode;
}

@property (readonly) unsigned int nfcTechnology;
@property (readonly) NSData *openLoopSchemeBitfield;
@property (readonly) unsigned short systemCode;
@property (readonly) NSArray *tcis;
@property (readonly) unsigned int terminalMode;

- (void).cxx_destruct;
- (unsigned int)nfcTechnology;
- (id)openLoopSchemeBitfield;
- (void)setNFCTechnology:(unsigned int)arg1;
- (void)setOpenLoopSchemeBitfield:(id)arg1;
- (void)setSystemCode:(unsigned short)arg1;
- (void)setTCIS:(id)arg1;
- (void)setTerminalMode:(unsigned int)arg1;
- (unsigned short)systemCode;
- (id)tcis;
- (unsigned int)terminalMode;

@end
