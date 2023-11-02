
@interface SBSystemNotesContentPresentationContext : NSObject {
    SBSystemNotesPositionConfiguration * _positionConfiguration;
    SBSSystemNotesPresentationConfiguration * _requestedConfiguration;
    unsigned long long  _source;
}

@property (nonatomic, retain) SBSystemNotesPositionConfiguration *positionConfiguration;
@property (nonatomic, retain) SBSSystemNotesPresentationConfiguration *requestedConfiguration;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (id)initWithLaunchBundleID:(id)arg1 presentationMode:(long long)arg2 source:(unsigned long long)arg3 positionConfiguration:(id)arg4;
- (id)initWithRequestedConfiguration:(id)arg1 source:(unsigned long long)arg2 positionConfiguration:(id)arg3;
- (id)positionConfiguration;
- (id)requestedConfiguration;
- (void)setPositionConfiguration:(id)arg1;
- (void)setRequestedConfiguration:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;

@end
