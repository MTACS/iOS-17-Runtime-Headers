
@interface wspQueryStatusExOut : NSObject {
    unsigned int  _cDocumentsToFilter;
    unsigned int  _cFilteredDocuments;
    unsigned int  _cResultsFound;
    unsigned int  _cRowsTotal;
    unsigned int  _dwRatioFinishedDenominator;
    unsigned int  _dwRatioFinishedNumerator;
    unsigned int  _maxRank;
    unsigned int  _qStatus;
    unsigned int  _rowsetBookMark;
    wspHeader * _whdr;
    unsigned int  _whereID;
}

@property unsigned int cDocumentsToFilter;
@property unsigned int cFilteredDocuments;
@property unsigned int cResultsFound;
@property unsigned int cRowsTotal;
@property unsigned int dwRatioFinishedDenominator;
@property unsigned int dwRatioFinishedNumerator;
@property unsigned int maxRank;
@property unsigned int qStatus;
@property unsigned int rowsetBookMark;
@property (retain) wspHeader *whdr;
@property unsigned int whereID;

- (void).cxx_destruct;
- (unsigned int)cDocumentsToFilter;
- (unsigned int)cFilteredDocuments;
- (unsigned int)cResultsFound;
- (unsigned int)cRowsTotal;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int*)arg3;
- (unsigned int)dwRatioFinishedDenominator;
- (unsigned int)dwRatioFinishedNumerator;
- (id)init;
- (unsigned int)maxRank;
- (unsigned int)qStatus;
- (unsigned int)rowsetBookMark;
- (void)setCDocumentsToFilter:(unsigned int)arg1;
- (void)setCFilteredDocuments:(unsigned int)arg1;
- (void)setCResultsFound:(unsigned int)arg1;
- (void)setCRowsTotal:(unsigned int)arg1;
- (void)setDwRatioFinishedDenominator:(unsigned int)arg1;
- (void)setDwRatioFinishedNumerator:(unsigned int)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setQStatus:(unsigned int)arg1;
- (void)setRowsetBookMark:(unsigned int)arg1;
- (void)setWhdr:(id)arg1;
- (void)setWhereID:(unsigned int)arg1;
- (id)whdr;
- (unsigned int)whereID;

@end
