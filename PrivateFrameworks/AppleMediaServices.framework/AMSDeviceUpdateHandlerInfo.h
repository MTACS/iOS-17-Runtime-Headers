
@interface AMSDeviceUpdateHandlerInfo : NSObject {
    id /* block */  _block;
    AMSDeviceMessengerFilter * _filter;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) AMSDeviceMessengerFilter *filter;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)filter;
- (void)setBlock:(id /* block */)arg1;
- (void)setFilter:(id)arg1;

@end
