
@interface WMFReader : NSObject <MFReader> {
    unsigned int  m_cursor;
    unsigned int  m_length;
    const char * m_pBuffer;
    WMFPlayer * m_player;
    int  m_recordsRead;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)checkBytesAvailable:(unsigned int)arg1;
- (id)initWithWMFPlayer:(id)arg1;
- (int)moveDataCursor:(unsigned int)arg1;
- (int)play:(id)arg1;
- (int)playHeaders;
- (int)playRecord;

@end
