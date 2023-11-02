
@interface AXSSLanguageTag : NSObject {
    NSString * _content;
    bool  _createdFromNewline;
    AXSSDialectMap * _dialect;
    long long  _offsetToInitialLocation;
    NSMutableOrderedSet * _predictedSecondaryDialects;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _taggedRange;
    NSString * _taggedString;
}

@property (nonatomic, readonly, copy) NSString *content;
@property (nonatomic, readonly) bool createdFromNewline;
@property (nonatomic, readonly) AXSSDialectMap *dialect;
@property (nonatomic) long long offsetToInitialLocation;
@property (nonatomic, retain) NSMutableOrderedSet *predictedSecondaryDialects;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } taggedRange;
@property (nonatomic, readonly, copy) NSString *taggedString;

- (void).cxx_destruct;
- (void)addPredictedSecondaryDialects:(id)arg1;
- (id)content;
- (bool)createdFromNewline;
- (id)description;
- (id)dialect;
- (id)initWithDialect:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 content:(id)arg3 createdFromNewline:(bool)arg4;
- (long long)offsetToInitialLocation;
- (id)predictedSecondaryDialects;
- (void)setOffsetToInitialLocation:(long long)arg1;
- (void)setPredictedSecondaryDialects:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })taggedRange;
- (id)taggedString;

@end
