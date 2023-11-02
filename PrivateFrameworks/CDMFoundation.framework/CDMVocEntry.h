
@interface CDMVocEntry : NSObject {
    NSString * _label;
    NSArray * _metadata;
    int  _nodeIndex;
    NSString * _semantic;
    NSString * _text;
    SIRINLUEXTERNALUsoGraph * _usoGraph;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSArray *metadata;
@property (nonatomic) int nodeIndex;
@property (nonatomic, readonly) NSString *semantic;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, retain) SIRINLUEXTERNALUsoGraph *usoGraph;

- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)arg1 label:(id)arg2 semantic:(id)arg3;
- (id)initWithText:(id)arg1 label:(id)arg2 semantic:(id)arg3 usoGraph:(id)arg4 nodeIndex:(int)arg5;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)metadata;
- (int)nodeIndex;
- (id)semantic;
- (void)setMetadata:(id)arg1;
- (void)setNodeIndex:(int)arg1;
- (void)setUsoGraph:(id)arg1;
- (id)text;
- (id)usoGraph;

@end
