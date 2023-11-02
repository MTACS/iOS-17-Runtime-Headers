
@interface SUUIReportAConcernReasonViewElement : SUUIViewElement {
    NSString * _name;
    NSNumber * _reasonID;
    NSString * _uppercaseName;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSNumber *reasonID;
@property (nonatomic, readonly, copy) NSString *uppercaseName;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)name;
- (id)reasonID;
- (id)uppercaseName;

@end
