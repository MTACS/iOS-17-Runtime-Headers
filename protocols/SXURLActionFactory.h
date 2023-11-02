
@protocol SXURLActionFactory <NSObject>

@required

- (<SXAction> *)actionForURL:(NSURL *)arg1;
- (<SXAction> *)actionForURL:(NSURL *)arg1 analytics:(SXJSONDictionary *)arg2;

@end
