
@interface UMLibInfoProvider : NSObject <UMLibInfoProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)passwdForUID:(unsigned int)arg1 error:(id*)arg2;

@end
