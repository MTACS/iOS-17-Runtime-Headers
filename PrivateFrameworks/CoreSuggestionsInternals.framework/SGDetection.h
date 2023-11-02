
@interface SGDetection : NSObject {
    NSString * _context;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _contextRangeOfInterest;
    NSString * _extraction;
    SGExtractionInfo * _extractionInfo;
    bool  _hasPhoneLabel;
    bool  _isUnlikelyPhone;
    NSString * _label;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _match;
    unsigned int  _type;
}

@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } contextRangeOfInterest;
@property (nonatomic, readonly) NSString *extraction;
@property (nonatomic, readonly) SGExtractionInfo *extractionInfo;
@property (nonatomic, readonly) bool hasPhoneLabel;
@property (nonatomic, readonly) bool isUnlikelyPhone;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } match;
@property (nonatomic, readonly) unsigned int type;

+ (id)detectionWithType:(unsigned int)arg1 text:(id)arg2 matchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 matchString:(id)arg4 label:(id)arg5 hasPhoneLabel:(bool)arg6 extractionInfo:(id)arg7 isUnlikelyPhone:(bool)arg8;

- (void).cxx_destruct;
- (id)context;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })contextRangeOfInterest;
- (id)description;
- (id)extraction;
- (id)extractionInfo;
- (bool)hasPhoneLabel;
- (id)initWithType:(unsigned int)arg1 extraction:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 label:(id)arg5 hasPhoneLabel:(bool)arg6 match:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 extractionInfo:(id)arg8 isUnlikelyPhone:(bool)arg9;
- (bool)isUnlikelyPhone;
- (id)label;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })match;
- (unsigned int)type;

@end
