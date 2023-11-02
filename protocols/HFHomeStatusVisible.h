
@protocol HFHomeStatusVisible <NSObject>

@required

- (bool)hf_hasSetVisibleInHomeStatus;
- (bool)hf_isForcedVisibleInHomeStatus;
- (bool)hf_isVisibleInHomeStatus;
- (bool)hf_supportsHomeStatus;
- (NAFuture *)hf_updateIsVisibleInHomeStatus:(bool)arg1;

@end
