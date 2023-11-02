
@interface WFVariableEditingOptions : NSObject {
    WFVariableEditingAnchor * _anchor;
    id /* block */  _onChange;
    id /* block */  _onFinish;
    unsigned long long  _resultType;
}

@property (nonatomic, readonly) WFVariableEditingAnchor *anchor;
@property (nonatomic, copy) id /* block */ onChange;
@property (nonatomic, copy) id /* block */ onFinish;
@property (nonatomic, readonly) unsigned long long resultType;

- (void).cxx_destruct;
- (id)anchor;
- (void)finishEditingReturningToKeyboard:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithAnchor:(id)arg1 resultType:(unsigned long long)arg2 onChange:(id /* block */)arg3 onFinish:(id /* block */)arg4;
- (bool)isEqual:(id)arg1;
- (id /* block */)onChange;
- (id /* block */)onFinish;
- (unsigned long long)resultType;
- (void)setOnChange:(id /* block */)arg1;
- (void)setOnFinish:(id /* block */)arg1;
- (void)variableDidChange:(id)arg1;

@end
