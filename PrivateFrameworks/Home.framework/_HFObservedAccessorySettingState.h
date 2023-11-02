
@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable> {
    NSSet * _selectionOptions;
    HMSetting * _setting;
    HMSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *selectionOptions;
@property (nonatomic, readonly) HMSetting *setting;
@property (nonatomic, readonly) HMSettings *settings;
@property (readonly) Class superclass;

+ (id)na_identity;
+ (id)stateWithSettings:(id)arg1 forSetting:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSettings:(id)arg1 setting:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)selectionOptions;
- (id)setting;
- (id)settings;

@end
