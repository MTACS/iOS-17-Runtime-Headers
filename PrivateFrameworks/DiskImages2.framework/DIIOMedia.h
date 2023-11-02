
@interface DIIOMedia : DIIOObject

@property (readonly, copy) NSString *BSDName;

- (id)BSDName;
- (id)copyBlockDeviceWithError:(id*)arg1;
- (id)initWithDevName:(id)arg1 error:(id*)arg2;

@end
