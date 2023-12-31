
@interface NSInsertionPointHelper : NSObject {
    unsigned long long  _altCount;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _charRange;
    unsigned long long  _count;
    unsigned long long * _displayAltCharIndexes;
    double * _displayAltPositions;
    unsigned long long * _displayCharIndexes;
    double * _displayPositions;
    unsigned long long * _logicalAltCharIndexes;
    double * _logicalAltPositions;
    unsigned long long * _logicalCharIndexes;
    double * _logicalLeftBoundaries;
    double * _logicalPositions;
    double * _logicalRightBoundaries;
    long long  _writingDirection;
}

- (void)dealloc;

@end
