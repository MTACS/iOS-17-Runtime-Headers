
@interface VMUObjectLabelHandlerInfo : NSObject {
    NSString * _className;
    SEL  _handlerSelector;
    Class  _localClass;
}

- (void).cxx_destruct;

@end
