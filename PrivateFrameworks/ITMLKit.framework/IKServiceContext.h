
@interface IKServiceContext : NSObject {
    NSDictionary * _contextDictionary;
    IKViewElement * _element;
}

@property (nonatomic, readonly, copy) NSDictionary *contextDictionary;
@property (nonatomic, readonly) IKViewElement *element;

- (void).cxx_destruct;
- (id)contextDictionary;
- (id)element;
- (id)initWithContextDictionary:(id)arg1 element:(id)arg2;

@end
