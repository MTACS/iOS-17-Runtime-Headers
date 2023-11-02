
@interface MusicKit_SoftLinking_MPModelResponseDetailedKeepLocalStatusRequesting : NSObject <MPModelResponseDetailedKeepLocalStatusRequesting> {
    NSArray * _children;
    MusicKit_SoftLinking_MPModelObject * _modelObject;
}

@property (nonatomic, copy) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MusicKit_SoftLinking_MPModelObject *modelObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)children;
- (id)initWithModelObject:(id)arg1 children:(id)arg2;
- (id)modelObject;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(id /* block */)arg2;
- (void)setChildren:(id)arg1;
- (void)setModelObject:(id)arg1;

@end
