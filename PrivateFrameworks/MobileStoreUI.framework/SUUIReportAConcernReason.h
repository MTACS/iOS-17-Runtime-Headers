
@interface SUUIReportAConcernReason : NSObject {
    NSString * _name;
    NSNumber * _reasonID;
    NSString * _uppercaseName;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *reasonID;
@property (nonatomic, copy) NSString *uppercaseName;

- (void).cxx_destruct;
- (id)name;
- (id)reasonID;
- (void)setName:(id)arg1;
- (void)setReasonID:(id)arg1;
- (void)setUppercaseName:(id)arg1;
- (id)uppercaseName;

@end
