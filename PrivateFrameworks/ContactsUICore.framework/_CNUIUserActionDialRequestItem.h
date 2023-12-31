
@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem {
    <CNTUDialRequest> * _dialRequest;
}

@property (nonatomic, readonly) <CNTUDialRequest> *dialRequest;

- (void).cxx_destruct;
- (id)description;
- (id)dialRequest;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)performActionWithContext:(id)arg1;

@end
