
@interface ECRawMessageHeader : NSObject {
    NSString * _body;
    NSString * _name;
    NSString * _transmittedName;
}

@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *transmittedName;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (id)initWithHeaderFieldName:(id)arg1 body:(id)arg2;
- (id)name;
- (id)transmittedName;

@end
