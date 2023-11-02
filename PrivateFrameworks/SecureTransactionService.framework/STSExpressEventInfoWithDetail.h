
@interface STSExpressEventInfoWithDetail : STSExpressEventInfo {
    NSString * _detail;
}

@property (nonatomic, readonly) NSString *detail;

- (void).cxx_destruct;
- (id)detail;
- (id)initWithState:(unsigned int)arg1 detail:(id)arg2;

@end
