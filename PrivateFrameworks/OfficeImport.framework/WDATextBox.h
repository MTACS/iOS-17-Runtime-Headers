
@interface WDATextBox : NSObject {
    NSNumber * _flowId;
    NSNumber * _flowSequence;
    bool  _isMultiColumn;
    WDDocument * mDocument;
    unsigned long long  mNextTextBoxId;
    bool  mOle;
    WDAContent * mParent;
    WDText * mText;
}

@property WDDocument *document;
@property (retain) NSNumber *flowId;
@property (retain) NSNumber *flowSequence;
@property bool isMultiColumn;
@property WDAContent *parent;

- (void).cxx_destruct;
- (id)description;
- (id)document;
- (id)flowId;
- (id)flowSequence;
- (id)init;
- (bool)isMultiColumn;
- (bool)isOle;
- (unsigned long long)nextTextBoxId;
- (id)parent;
- (void)setDocument:(id)arg1;
- (void)setFlowId:(id)arg1;
- (void)setFlowSequence:(id)arg1;
- (void)setIsMultiColumn:(bool)arg1;
- (void)setNextTextBoxId:(unsigned long long)arg1;
- (void)setOle:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
