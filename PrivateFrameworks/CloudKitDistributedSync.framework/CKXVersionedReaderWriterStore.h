
@interface CKXVersionedReaderWriterStore : NSObject {
    NSObject<CKXBinding> * _binding;
    NSDictionary * _optionsByReaderWriterClass;
    CKXORCReader * _orcReader;
    CKXORCWriter * _orcWriter;
}

@property (nonatomic, retain) NSObject<CKXBinding> *binding;
@property (nonatomic, retain) NSDictionary *optionsByReaderWriterClass;
@property (nonatomic, retain) CKXORCReader *orcReader;
@property (nonatomic, retain) CKXORCWriter *orcWriter;

+ (bool)versionSupported:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)binding;
- (id)createReaderForVersionIfNecessary:(unsigned char)arg1;
- (id)createWriterForVersionIfNecessary:(unsigned char)arg1;
- (id)initWithBinding:(id)arg1 optionsByReaderWriterClass:(id)arg2;
- (id)optionsByReaderWriterClass;
- (id)orcReader;
- (id)orcWriter;
- (id)readerForVersion:(unsigned char)arg1;
- (void)setBinding:(id)arg1;
- (void)setOptionsByReaderWriterClass:(id)arg1;
- (void)setOrcReader:(id)arg1;
- (void)setOrcWriter:(id)arg1;
- (id)writerForVersion:(unsigned char)arg1;

@end
