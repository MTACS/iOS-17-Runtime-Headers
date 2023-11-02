
@protocol SWURLSchemeHandlerFactory <NSObject>

@required

- (<SWURLSchemeHandler> *)createURLSchemeHandlerWithTask:(id <WKURLSchemeTask>)arg1;

@end
