
@interface QueryStatusExResults : NSObject {
    unsigned int  _cDocumentsToFilter;
    unsigned int  _cFilteredDocuments;
    unsigned int  _cResultsFound;
    unsigned int  _cRowsTotal;
    unsigned int  _dwRatioFinishedDenominator;
    unsigned int  _dwRatioFinishedNumerator;
    unsigned int  _maxRank;
    unsigned int  _qStatus;
    unsigned int  _rowsetBookMark;
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
@property unsigned int whereID;

- (unsigned int)cDocumentsToFilter;
- (unsigned int)cFilteredDocuments;
- (unsigned int)cResultsFound;
- (unsigned int)cRowsTotal;
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
- (void)setWhereID:(unsigned int)arg1;
- (unsigned int)whereID;

@end
