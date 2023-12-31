
@interface SWMessage : NSObject <SWMessage> {
    NSDictionary * _body;
    NSString * _name;
}

@property (nonatomic, readonly) NSDictionary *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)body;
- (id)initWithDictionary:(id)arg1;
- (id)name;

@end
