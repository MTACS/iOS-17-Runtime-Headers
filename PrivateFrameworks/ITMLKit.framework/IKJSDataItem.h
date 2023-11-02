
@interface IKJSDataItem : IKJSDataObservable <IKJSDataItem, NSObject, _IKJSDataItem, _IKJSDataItemProxy> {
    NSString * _identifier;
    NSString * _prototypeIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly) NSDictionary *dataDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) NSString *prototypeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (id)makeDataItem:(id)arg1 :(id)arg2;

- (void).cxx_destruct;
- (id)asPrivateIKJSDataItem;
- (id)dataDictionary;
- (id)identifier;
- (id)init;
- (id)initWithType:(id)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2;
- (id)initWithValue:(id)arg1;
- (id)prototypeIdentifier;
- (void)setIdentifier:(id)arg1;
- (void)setPrototypeIdentifier:(id)arg1;
- (id)type;

@end
