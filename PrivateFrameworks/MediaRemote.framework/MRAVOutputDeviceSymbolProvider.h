
@interface MRAVOutputDeviceSymbolProvider : NSObject

+ (id)_currentDeviceRoutingSymbolName;
+ (id)_fallbackSymbolNameForOutputDevice:(id)arg1;
+ (id)_symbolNameMap;
+ (id)symbolNameForClusterOutputDevice:(id)arg1;
+ (id)symbolNameForModelID:(id)arg1;
+ (id)symbolNameForOutputDevice:(id)arg1;
+ (id)symbolNameForOutputDevices:(id)arg1;

@end
