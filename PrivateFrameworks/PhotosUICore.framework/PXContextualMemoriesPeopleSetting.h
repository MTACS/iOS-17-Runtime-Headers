
@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting> {
    NSArray * _peopleNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, retain) NSArray *peopleNames;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)headerTitle;
- (id)init;
- (id)peopleNames;
- (void)requestPeopleNamesUpdateSinceDate:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resetToDefault;
- (void)setPeopleNames:(id)arg1;
- (id)title;

@end
