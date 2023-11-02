
@interface HUSoftwareUpdateFetchItem : HFItem {
    HMHome * _home;
    NAFuture * _softwareUpdateFetchFuture;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NAFuture *softwareUpdateFetchFuture;

+ (id)_dateFormatter;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)description;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2;
- (void)setSoftwareUpdateFetchFuture:(id)arg1;
- (id)softwareUpdateFetchFuture;

@end
