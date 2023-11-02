
@protocol TVRCHMServiceWrapperDelegate <NSObject>

@required

- (void)connectedToService:(TVRCHMServiceWrapper *)arg1;
- (void)disconnectedFromService:(TVRCHMServiceWrapper *)arg1 error:(NSError *)arg2;
- (void)service:(TVRCHMServiceWrapper *)arg1 updatedName:(NSString *)arg2;

@end
