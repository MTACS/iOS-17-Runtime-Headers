
@interface ATXContextStoreWriter : NSObject <ATXContextStoreWriterProtocol> {
    _CDClientContext * _context;
    _CDContextualKeyPath * _keyPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 keyPath:(id)arg2;
- (bool)setWithObject:(id)arg1;

@end
