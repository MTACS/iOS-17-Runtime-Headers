
@interface UPResultCandidateEntity : NSObject {
    NSNumber * _groupId;
    NSString * _label;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _semanticValue;
    SIRINLUEXTERNALUsoGraph * _sharedEntityGraph;
    NSString * _text;
}

@property (readonly) NSNumber *groupId;
@property (readonly) NSString *higherLevelChildLabel;
@property (readonly) NSString *higherLevelParentLabel;
@property (readonly) bool isHigherLevelEntity;
@property (readonly) NSString *label;
@property (readonly) UPResultLeafNode *leafNodeRepresentation;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) NSString *semanticValue;
@property (readonly) SIRINLUEXTERNALUsoGraph *sharedEntityGraph;
@property (readonly) NSString *text;

- (void).cxx_destruct;
- (id)_indexedLabelRepresentation;
- (id)annotatedEntityFragmentString;
- (id)groupId;
- (id)higherLevelChildLabel;
- (id)higherLevelParentLabel;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 label:(id)arg2 text:(id)arg3 groupId:(id)arg4 semanticValue:(id)arg5 sharedEntityGraph:(id)arg6;
- (bool)isHigherLevelEntity;
- (id)label;
- (id)leafNodeRepresentation;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)semanticValue;
- (id)sharedEntityGraph;
- (id)text;

@end
