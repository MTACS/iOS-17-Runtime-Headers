
@interface CREANController : NSObject {
    NSData * apTicket;
}

- (void).cxx_destruct;
- (id)_apticketCopyDataObjectPropertyWithTag:(unsigned long long)arg1 property:(unsigned long long)arg2;
- (id)_getDataClassesToWrite;
- (unsigned int)_getQuerykeyFromDataClass:(id)arg1;
- (id)_ticketCopyHashDataWithNode:(unsigned int)arg1;
- (bool)_writeDataToEAN:(id)arg1 withKey:(id)arg2;
- (id)apticketCopyHashData;
- (bool)calculateDerLength:(id)arg1 actualSize:(unsigned long long*)arg2;
- (id)copyCurrentFDREANValuesWithdataDir:(id)arg1 error:(id*)arg2;
- (bool)copyFDREANValues:(id)arg1 outgenerationCount:(unsigned int*)arg2 outManifesthash:(id*)arg3;
- (id)copyStagedFDREanDataWithdataDir:(id)arg1 error:(id*)arg2;
- (bool)deleteFDRDataFromEANWithDataClass:(id)arg1;
- (bool)isEANSupported;
- (unsigned int)nextEANGenerationCount;
- (bool)readFDRDataFromEANWithDataClass:(id)arg1 outData:(id*)arg2 stripPadding:(bool)arg3;
- (bool)setupVersionedFDRWithApTicket:(id)arg1;
- (unsigned long long)sizeEAN:(id)arg1;
- (bool)stageVersionedFDREANWithdataDir:(id)arg1 error:(id*)arg2;
- (bool)swapEAN:(id)arg1 withKey:(id)arg2;
- (bool)swapVersionedFDR;
- (bool)verifyFDRDataFromEANUsingCache:(bool)arg1 cachedData:(id)arg2;
- (bool)writeEAN:(id)arg1 isImg4:(bool)arg2;
- (bool)writeFDRDataToEANWithdataDir:(id)arg1;

@end
