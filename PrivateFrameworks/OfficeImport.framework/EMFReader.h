
@interface EMFReader : NSObject <MFReader> {
    EMFPlayer * m_player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithEMFPlayer:(id)arg1;
- (int)play:(id)arg1;

@end
