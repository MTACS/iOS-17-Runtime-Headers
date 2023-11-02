
@interface AXOutputAction : NSObject <NSCopying> {
    NSString * _brailleString;
    bool  _generatesBraille;
    NSString * _originalString;
    unsigned long long  _outputActionID;
    bool  _performPunctuationTranslation;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfString;
    bool  _replaceCommas;
    NSString * _string;
    AXIndexMap * _variants;
    bool  _wasDivided;
}

@property (nonatomic, retain) NSString *brailleString;
@property (nonatomic) bool generatesBraille;
@property (nonatomic, readonly) NSString *originalString;
@property (nonatomic, readonly) unsigned long long outputActionID;
@property (nonatomic, readonly) AXIndexMap *outputVariants;
@property (nonatomic) bool performPunctuationTranslation;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfString;
@property (nonatomic) bool replaceCommas;
@property (nonatomic, retain) NSString *string;
@property (nonatomic) bool wasDivided;

+ (unsigned long long)newOutputActionID;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString;
- (id)brailleString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)generatesBraille;
- (unsigned long long)hash;
- (id)initWithAXAction:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 brailleString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectForVariant:(long long)arg1;
- (id)originalString;
- (unsigned long long)outputActionID;
- (id)outputVariants;
- (bool)performPunctuationTranslation;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString;
- (void)removeObjectForVariant:(long long)arg1;
- (bool)replaceCommas;
- (void)setBrailleString:(id)arg1;
- (void)setGeneratesBraille:(bool)arg1;
- (void)setObject:(id)arg1 forVariant:(long long)arg2;
- (void)setPerformPunctuationTranslation:(bool)arg1;
- (void)setReplaceCommas:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setString:(id)arg1 overrideOriginalString:(bool)arg2;
- (void)setWasDivided:(bool)arg1;
- (id)string;
- (bool)wasDivided;

@end
