
@interface NTKCompanionRemoteComplication : NTKRemoteComplication {
    NTKCompanion3rdPartyApp * _app;
}

@property (nonatomic, retain) NTKCompanion3rdPartyApp *app;

+ (id)complicationWithApp:(id)arg1;

- (void).cxx_destruct;
- (id)app;
- (id)localizedDetailText;
- (id)ntk_sectionIdentifier;
- (void)setApp:(id)arg1;

@end
