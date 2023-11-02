
@interface MPCPlayerFavoriteCommandRequest : MPCPlayerCommandRequest {
    MPModelObject * _modelObject;
    bool  _value;
}

@property (nonatomic, readonly) MPModelObject *modelObject;
@property (nonatomic, readonly) bool value;

- (void).cxx_destruct;
- (id)initWithModelObject:(id)arg1 value:(bool)arg2 controller:(id)arg3 label:(id)arg4;
- (id)modelObject;
- (bool)value;

@end
