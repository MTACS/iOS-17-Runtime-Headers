
@interface SIRINLUDelegatedUserDialogAct : NSObject <SIRINLUUserDialogAct> {
    int  _asrHypothesisIndex;
    NSString * _externalParserId;
    SIRINLUReferenceContext * _referenceContext;
    SIRINLURewriteMessage * _rewrite;
    NSArray * _rewrites;
    NSString * _rewrittenUtterance;
    NSArray * _spans;
}

@property int asrHypothesisIndex;
@property (nonatomic, retain) NSString *externalParserId;
@property (nonatomic, retain) SIRINLUReferenceContext *referenceContext;
@property (nonatomic, retain) SIRINLURewriteMessage *rewrite;
@property (nonatomic, retain) NSArray *rewrites;
@property (nonatomic, retain) NSString *rewrittenUtterance;
@property (nonatomic, retain) NSArray *spans;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)asrHypothesisIndex;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalParserId;
- (id)initWithAsrHypothesisIndex:(int)arg1 rewrittenUtterace:(id)arg2 externalParserId:(id)arg3;
- (id)initWithAsrHypothesisIndex:(int)arg1 rewrittenUtterace:(id)arg2 externalParserId:(id)arg3 spans:(id)arg4;
- (id)initWithAsrHypothesisIndex:(int)arg1 rewrittenUtterace:(id)arg2 externalParserId:(id)arg3 spans:(id)arg4 rewriteMessage:(id)arg5;
- (id)initWithAsrHypothesisIndex:(int)arg1 rewrittenUtterace:(id)arg2 externalParserId:(id)arg3 spans:(id)arg4 rewriteMessage:(id)arg5 referenceContext:(id)arg6;
- (id)initWithAsrHypothesisIndex:(int)arg1 rewrittenUtterace:(id)arg2 externalParserId:(id)arg3 spans:(id)arg4 rewriteMessages:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)referenceContext;
- (id)rewrite;
- (id)rewrites;
- (id)rewrittenUtterance;
- (void)setAsrHypothesisIndex:(int)arg1;
- (void)setExternalParserId:(id)arg1;
- (void)setReferenceContext:(id)arg1;
- (void)setRewrite:(id)arg1;
- (void)setRewrites:(id)arg1;
- (void)setRewrittenUtterance:(id)arg1;
- (void)setSpans:(id)arg1;
- (id)spans;

@end
