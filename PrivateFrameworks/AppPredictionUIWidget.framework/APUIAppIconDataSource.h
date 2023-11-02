
@interface APUIAppIconDataSource : NSObject <SBLeafIconDataSource> {
    <APUIAppIconDataSourceDelegate> * _delegate;
}

@property (nonatomic, readonly, copy) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APUIAppIconDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)_appClipIconForIdentifier:(id)arg1;
+ (id)_appClipIconTreatmentForCGImage:(struct CGImage { }*)arg1;
+ (id)iconForBundleIdentifier:(id)arg1 shouldApplyMask:(bool)arg2;
+ (void)openApplication:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (unsigned long long)priorityForIcon:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
