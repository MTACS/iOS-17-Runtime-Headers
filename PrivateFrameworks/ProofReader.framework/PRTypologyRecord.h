
@interface PRTypologyRecord : NSObject {
    NSString * _appIdentifier;
    bool  _autocapitalize;
    bool  _autocorrect;
    double  _closeTime;
    bool  _initialCapitalize;
    bool  _isOpen;
    NSArray * _keyEventArray;
    PRLanguage * _langObj;
    NSArray * _languages;
    unsigned long long  _offset;
    double  _openTime;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSArray * _results;
    NSValue * _selectedRangeValue;
    NSString * _string;
    NSArray * _topLanguages;
    NSMutableArray * _typologyCandidates;
    NSMutableArray * _typologyCorrections;
}

+ (id)currentTypologyRecord;
+ (id)openTypologyRecordWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 languageObject:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(bool)arg6 initialCapitalize:(bool)arg7 autocapitalize:(bool)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11;
+ (void)resetTypologyRecords;
+ (void)setTypologyRecordsLimit:(unsigned long long)arg1;
+ (void)writeTypologyRecords;

- (void)addCandidate:(id)arg1;
- (void)addCorrection:(id)arg1;
- (void)closeTypologyRecordWithResults:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithString:(id)arg1 offset:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 languageObject:(id)arg4 languages:(id)arg5 topLanguages:(id)arg6 autocorrect:(bool)arg7 initialCapitalize:(bool)arg8 autocapitalize:(bool)arg9 keyEventArray:(id)arg10 appIdentifier:(id)arg11 selectedRangeValue:(id)arg12;

@end
