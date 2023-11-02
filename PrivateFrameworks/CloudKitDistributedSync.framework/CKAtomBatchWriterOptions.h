
@interface CKAtomBatchWriterOptions : NSObject {
    bool  _fileBacked;
    unsigned char  _formatVersion;
    NSDictionary * _underlyingWriterOptionsByClass;
}

@property (nonatomic) bool fileBacked;
@property (nonatomic) unsigned char formatVersion;
@property (nonatomic, copy) NSDictionary *underlyingWriterOptionsByClass;

- (void).cxx_destruct;
- (bool)fileBacked;
- (unsigned char)formatVersion;
- (id)init;
- (void)setFileBacked:(bool)arg1;
- (void)setFormatVersion:(unsigned char)arg1;
- (void)setUnderlyingWriterOptionsByClass:(id)arg1;
- (id)underlyingWriterOptionsByClass;

@end
