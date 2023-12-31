
@interface AKMinimalUserInterfaceItem : NSObject <AKUserInterfaceItem> {
    long long  _tag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithTag:(long long)arg1;
- (long long)tag;

@end
