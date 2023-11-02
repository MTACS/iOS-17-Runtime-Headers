
@interface SKIOMedia : SKIOObject

@property (readonly, copy) NSString *BSDName;

- (id)BSDName;
- (id)copyBlockDevice;
- (id)initWithDADisk:(id)arg1;
- (id)initWithDevName:(id)arg1;

@end
