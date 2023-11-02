
@interface UARPUpdaterServicePreferences : NSObject {
    NSString * _domain;
}

@property (readonly) NSString *domain;

- (void).cxx_destruct;
- (id)domain;
- (id)initWithDomain:(id)arg1;
- (id)uuidForAccessory:(id)arg1 serialNumber:(id)arg2 error:(id*)arg3;

@end
