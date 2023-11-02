
@protocol INKeyImageProducing <NSObject>

@required

- (long long)_compareSubProducerOne:(id <INKeyImageProducing>)arg1 subProducerTwo:(id <INKeyImageProducing>)arg2;
- (INImage *)_keyImage;

@optional

- (bool)_isValidSubProducer:(id <INKeyImageProducing>)arg1;

@end
