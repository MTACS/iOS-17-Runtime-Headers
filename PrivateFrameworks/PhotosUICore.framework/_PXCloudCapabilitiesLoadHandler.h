
@interface _PXCloudCapabilitiesLoadHandler : NSObject {
    id /* block */  _block;
    NSString * _capability;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) NSString *capability;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)capability;
- (void)setBlock:(id /* block */)arg1;
- (void)setCapability:(id)arg1;

@end
