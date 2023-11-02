
@interface IMDPlainTextTapbackInterpreter : NSObject {
    __IMDPlainTextTapbackInterpreterImpl * _impl;
}

@property (nonatomic, retain) __IMDPlainTextTapbackInterpreterImpl *impl;

- (void).cxx_destruct;
- (id)impl;
- (id)init;
- (id)interpretMessageItem:(id)arg1 inChat:(id)arg2;
- (void)setImpl:(id)arg1;

@end
